#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,x;   cin>>n>>x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    unordered_map<int,int> mp;
    int sum=0,ans=0;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum+=v[i];
       
        ans+=mp[sum-x];
        mp[sum]++;
    }
    
    cout<<ans<<"\n";
    
}