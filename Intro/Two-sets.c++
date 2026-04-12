#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
    long long int sum,n,k; cin>>n;
        sum=(n*(n+1))/2;
        if(sum&1)
            cout<<"NO";
        else
        {
            cout<<"YES"<<endl;
            k=n;
            unordered_set<int> s1,s2;
            sum/=2;
            while(sum>=k)
            {
                sum-=k;
                s1.insert(k);
                k--;
            }
            if(sum!=0)
                s1.insert(sum);
            for(int i=1;i<=n;i++)
            {
                if(s1.find(i) ==s1.end())
                    s2.insert(i);
            }
            cout<<s1.size()<<endl;
            for(auto x:s1)
                cout<<x<<" ";

            cout<<endl<<s2.size()<<endl;
            for(auto y: s2)
                cout<<y<<" ";

        }
}