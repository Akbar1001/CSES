// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     ll n;   cin>>n;
//     vector<ll> v(n);
//     unordered_map<int,int> mp;
//     for(ll i=0;i<n;i++){
//         cin>>v[i];
//         mp[v[i]]=i;
//     }
    
//     ll ans=1;
//     for(ll x=1;x+1<=n;x++){
//         if(mp[x+1]<mp[x])
//             ans++;
//     }
//     cout<<ans;
    
// }
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;   cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]=i;
    }
        
    
    ll k=1;
    for(ll i=2;i<=n;i++){
        if(mp[i]<mp[i-1])
            k++;
    }
    cout<<k;
    
    
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    
}