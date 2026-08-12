#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll n,ans=0;   cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    ll i=0,j=0; map<ll,ll> mp;
    while(j<v.size()){
        mp[v[j]]++;
        while(mp[v[j]]>1){
            mp[v[i]]--;
            i++;
        }
        ans+=(j-i+1);
        j++;
    }
    cout<<ans;     
}