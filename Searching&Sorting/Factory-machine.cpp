#include<bits/stdc++.h>
using namespace std;
using ll = long long;

using pr = pair<ll,ll>;


bool check(vector<ll>&v,ll t,ll m){
    ll k=0;
    for(ll i=0;i<v.size();i++){
        ll d=m/v[i];
        k+=d;
        if(k>=t) return true;
    }
    
    return false;
}

void solve(){
    ll n,t;   cin>>n>>t;
    vector<ll> v(n);
    ll ans,h=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        h=max(h,v[i]);
    }
    h=h*t;
    ans=h; ll l=0;
    while(l<=h){
        ll m= l + (h-l)/2;
        if(check(v,t,m))
        {
            ans=min(ans,m);
            h=m-1;
        }
        else
            l=m+1;
    }
   
   cout<<ans<<"\n";
    
}





int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

        
        solve();
        
}