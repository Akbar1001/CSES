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
        
        ll ans=1;
        ll i=0,j=0;
        map<int,int> mp;
        while(j<n){
            
            if(mp.count(v[j])){
                i=max(i,(ll)mp[v[j]]+1);
            }
            ans=max(ans,j-i+1);
            mp[v[j]]=j;
            j++;
        }
        cout<<ans<<"\n";
    
}