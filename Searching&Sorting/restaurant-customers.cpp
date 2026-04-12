#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

  
    ll n,mx=-1;   cin>>n;
    vector<vector<ll>> p;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        p.push_back({a,b});
    }
    sort(p.begin(),p.end());

    ll cur=0,ans=0;
    
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ans=max(ans,cur);
            
        }
    }
    cout<<ans;
}