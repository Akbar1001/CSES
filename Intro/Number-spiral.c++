#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int y,x,area;
        cin>>y>>x;
        if(y>x)
        {
            area=(y-1)*(y-1);
            if(y%2==1)
                area+=x;
            else
                area+=((2*y)-x);
        }
        else
        {
            area=(x-1)*(x-1);
            if(x%2==0)
                area+=y;
            else
                area+=((2*x)-y);
        }
        cout<<area<<endl;
    }
}