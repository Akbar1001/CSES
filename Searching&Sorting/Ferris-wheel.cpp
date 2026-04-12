#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    ll ans=0,i=0,j=n-1;
    while(i<=j){
        if(i==j){
            ans++;
            break;
        }
        if(v[i]+v[j]>x){
            ans++;
            j--;
        }
        else{
            ans++;
            i++;
            j--;
        }
    }
    cout<<ans;
           
}