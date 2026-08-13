#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll n;   cin>>n;
    queue<ll> que;
    for(ll i=1;i<=n;i++)
        que.push(i);
    bool flag=false;
    while(!que.empty()){
        ll x=que.front();
        que.pop();
        if(flag)
            cout<<x<<" ";
        else
            que.push(x);
        flag=!flag;
    }
}