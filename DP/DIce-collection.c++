#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int n,int i){
    
    if(i==1 || n==0)
        return 1;

    int not_take=0+solve(n,i-1);
    int take=0;
    if(n>=i)
        take=1+solve(n-i,i);

    return take+not_take;
}

int main()
{
    ll n;   cin>>n;
    
    cout<<solve(n,6);
     
}