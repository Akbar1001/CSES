#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(){
    ll n;   cin>>n;
    vector<vector<ll>> v;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
        
    }
    
    sort(v.begin(),v.end());
    ll ans=0,ct=0;
    for(ll i=0;i<n;i++){
        ct+=v[i][0];
        ans+=(v[i][1]-ct);
    }
    return ans;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   
        cout<<solve();
   
}