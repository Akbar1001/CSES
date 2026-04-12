#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;   cin>>s;
    char c=s[0]; long long int ans=0,len=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==c)
            len++;
        else
        {
            ans=max(len,ans);
            len=1;
            c=s[i];
        }
    }
    ans=max(ans,len);
    cout<<ans;
}