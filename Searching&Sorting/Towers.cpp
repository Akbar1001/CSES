#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll n,k;   cin>>n>>k;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        auto it= upper_bound(v.begin(),v.end(),x);
        if(it==v.end())
            v.push_back(x);
        else
            *it=x;
    }
    
    cout<<v.size();
    
     
}