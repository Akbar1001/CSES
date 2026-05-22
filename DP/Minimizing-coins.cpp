#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int M = 1e9 + 7;

ll solve(vector<ll> &v,ll i,ll t,vector<vector<ll>> &dp){
   
   if(i==0){
        if(t%v[0]==0)
            return t/v[i];
        return INT_MAX;
   }
   
   if(dp[i][t]!=-1)     return dp[i][t];
   
   
   ll ntk=0+solve(v,i-1,t,dp);
   
   ll tk=INT_MAX;
   
   if(t-v[i]>=0)
        tk=min(1+solve(v,i,t-v[i],dp),1+solve(v,i-1,t-v[i],dp));
   
   return dp[i][t]=min(ntk,tk);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,t; cin>>n>>t;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    vector<vector<ll>> dp(n,vector<ll>(t+1,-1));
    
    int ans=solve(v,n-1,t,dp);
    if(ans==INT_MAX)
        cout<<-1;
    else
        cout<<ans;

    return 0;
}