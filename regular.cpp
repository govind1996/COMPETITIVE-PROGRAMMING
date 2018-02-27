#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        if(n&1)
        {
            cout<<(n/2-1)<<endl;
        }
        else
        {
            if(abs(a-b)==n/2)
                cout<<0<<endl;
            else
                cout<<((n/2)-2)<<endl;

        }
    }
}
