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
    
    // Kadane's Algorithm
    
    ll ans=INT_MIN,sum=0;
    for(auto x:v){
        sum+=x;
        ans=max(ans,sum);
        if(sum<0)
            sum=0;
    }
    cout<<ans;
}