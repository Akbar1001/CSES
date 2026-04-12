#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int ans=0, n;
    cin>>n;
    long long int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long int i=1;i<n;i++)
    {
        if(a[i]<a[i-1]){
            ans+=abs(a[i]-a[i-1]);
            a[i]=a[i-1];
        }
    }
    cout<<ans;
}