#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll n,k;   cin>>n>>k;
    set<ll> st={0,n}; multiset<ll> mts={n};
    for(ll i=0;i<k;i++)
    {
        ll x; cin>>x;
        auto it=st.upper_bound(x);
        ll r=*it;
        ll l=*prev(it);
    
        mts.erase(mts.find(r-l));

        mts.insert(x-l);
        mts.insert(r-x);
        
        st.insert(x);

        cout<<*mts.rbegin()<<(i==k-1 ? "":" ");
    }    
     return 0;
}