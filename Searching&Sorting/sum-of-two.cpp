#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

        ll n,x;   cin>>n>>x;

        
        vector<pair<ll,ll>> v;
         
        for(ll i=0;i<n;i++){
            ll a; cin>>a;
            v.push_back({a,i+1});
        }
       
        
        sort(v.begin(),v.end());
        ll i=0,j=n-1;
        while(i<j){
            ll sum=v[i].first+v[j].first;
            if(sum>x)
                j--;
            else if(sum<x)
                i++;
            else{
                cout<<v[i].second<<" "<<v[j].second;
                break;
            }
        }
        
        if(i>=j)
            cout<<"IMPOSSIBLE";
    
}