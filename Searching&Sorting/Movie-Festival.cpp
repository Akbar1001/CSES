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
    // sorting on the basis of 2nd column
    sort(p.begin(),p.end(),[](const vector<ll> &a,const vector<ll> &b) {
        return a[1]<b[1];
    });

    ll c=1,last_finish=p[0][1],ans=0;
    
    for(ll i=1;i<n;i++){
        
        if(last_finish<=p[i][0] ){
            last_finish=p[i][1];
            c++;
        }
        ans=max(ans,c);
    }
    cout<<ans;
}