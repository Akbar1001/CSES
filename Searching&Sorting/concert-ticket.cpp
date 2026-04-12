#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   
    ll n,m;   cin>>n>>m;
    vector<ll> v(n),d(m);

    for(ll i=0;i<n;i++)
        cin>>v[i];
    multiset<int> tickets;
    for(ll i=0;i<n;i++)
        tickets.insert(v[i]);

    while(m--){
        ll mx;  cin>>mx;
        auto prsnt=tickets.upper_bound(mx);
        if(prsnt==tickets.begin())
            cout<<-1<<"\n";
        else{
            prsnt--;
            cout<<*prsnt<<"\n";
            tickets.erase(prsnt);
        }
    }
    
}