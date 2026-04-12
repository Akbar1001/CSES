#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int sum=0, n;
    cin>>n;
    long long int a[n-1]; 
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    long long int ts= (n*(n+1))/2;
    cout<<ts-sum;
}