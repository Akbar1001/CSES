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
        long long sum=0;
        for(ll i=0;i<n;i++){
            if(v[i]>sum+1)
                break;
            sum+=v[i];
        }
        cout<<sum+1;
    
}