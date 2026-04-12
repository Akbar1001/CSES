#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   
    ll n,m,k;   cin>>n>>m>>k;
    vector<ll> a(n),b(m);

    for(ll i=0;i<n;i++)
        cin>>a[i];
    
    for(ll i=0;i<m;i++)
        cin>>b[i];
   
    ll j=0,i=0,ans=0;
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    while(i<n && j<m){
        if(b[j]<a[i]-k){    // apartment too small so we move to next aprtmnt
            j++;
        }
        else if(a[i]+k<b[j]){   // aprtment too big to so we chose next candidate having bigger range
            i++;
        }
        else{   // aprtment in between the range
            ans++;
            i++;
            j++;
        }
    }
    cout<<ans;
}