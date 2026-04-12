#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll n,string s){
    if(s.size()==n)
    {
        cout<<s<<"\n";
        return;
    }

    solve(n,s+"0");

    solve(n,s+"1");
}
int main()
{
    ll n;   cin>>n;
    solve(n,"");
}