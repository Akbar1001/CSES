#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;   cin>>n;
    vector<ll> v(n);
    unordered_map<int,int> mp;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]=i;
    }
    
    ll ans=1;
    for(ll x=1;x+1<=n;x++){
        if(mp[x+1]<mp[x])
            ans++;
    }
    cout<<ans;
    
}