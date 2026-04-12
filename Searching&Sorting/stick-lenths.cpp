#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
        ll n;   cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        
        ll ans=0;

        for(ll i=0;i<n;i++)
            ans+=abs(v[(n-1)/2]-v[i]);
        
        cout<<ans;
    
}