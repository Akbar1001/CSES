#include<bits/stdc++.h>
using namespace std;
using ll= long long;



int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,m=1e9+7,ans=1; cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    
    map<ll,ll> mp;
    for(auto x:v)
        mp[x]++;

    for(auto x:mp)
        ans=(ans*(x.second+1))%m;

    cout<<ans-1;
}