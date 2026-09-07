#include<bits/stdc++.h>
using namespace std;
using ll = long long;

using pr = pair<ll,ll>;


struct Range{
    ll start,end,index;
};

bool cus(const Range& a, const Range& b){
    if(a.start==b.start)
        return a.end<b.end;
    
    return a.start<b.start;
}


void solve(){
    ll n;   cin>>n;
    vector<Range> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].start>>v[i].end;
        v[i].index=i;
    }
    
    vector<ll> rooms(n,0);
    sort(v.begin(),v.end(),cus);
    
   priority_queue<pr,vector<pr> ,  greater<pr>> que;
   ll ans=0;
   
   for(ll i=0;i<n;i++){
       if(que.empty())
        {
            ans++;
            rooms[v[i].index]=ans;
            que.push({v[i].end,ans});
        }
        else{
            pair<ll,ll> p=que.top();
            if(p.first<v[i].start){
                que.pop();
                que.push({v[i].end,p.second});
                rooms[v[i].index]=p.second;
            }
            else{
                ans++;
                rooms[v[i].index]=ans;
                que.push({v[i].end,ans});
            }
        }
   }
   
   cout<<ans<<"\n";
   for(ll i=0;i<n;i++)
        cout<<rooms[i]<<(i==n-1?"":" ");
    
}





int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

        
        solve();
        
}