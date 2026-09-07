#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct Range{
    ll start,end,index;
};


bool cus(const Range& a, const Range& b){
    if(a.start!=b.start)
        return a.start<b.start;
    
    return a.end>b.end;
}

void solve(){
    ll n;   cin>>n;
    vector<Range> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].start>>v[i].end;
        v[i].index=i;
    }
    
    
    sort(v.begin(),v.end(),cus);
    
    vector<ll> contains(n,0),contains_by(n,0);
    ll mxe=0;
    for(ll i=0;i<n;i++){
        if(mxe>=v[i].end)
            contains_by[v[i].index]++;
        
        mxe=max(mxe,v[i].end);
    }
    
    ll mins=INT_MAX;
    for(ll i=n-1;i>=0;i--){
        if(v[i].end>=mins)
            contains[v[i].index]++;
        mins=min(mins,v[i].end);
    }
    
    for(ll i=0;i<n;i++)
        cout<<contains[i]<<(i==n-1 ? "":" ");
    cout<<"\n";
    for(ll i=0;i<n;i++)
        cout<<contains_by[i]<<(i==n-1 ? "":" ");
    
    
}





int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

        
        solve();
        
}