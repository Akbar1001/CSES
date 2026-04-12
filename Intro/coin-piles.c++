#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B;    cin>>A>>B;
        if ((2 * A - B) % 3 || (2 * A - B) < 0
        || (2 * B - A) % 3 || (2 * B - A) < 0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}