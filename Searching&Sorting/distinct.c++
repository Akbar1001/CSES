#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    unordered_set<long long> st;
    for(int i=0;i<t;i++){
        long long x; cin>>x;
        st.insert(x);
    }
    cout<<st.size();
}
