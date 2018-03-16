#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        set<long int> s;
        for(long int i=0;i<n;i++)
        {
            long int v;
            cin>>v;
            s.insert(v);
        }
        cout<<n-s.size()<<endl;
    }
}
