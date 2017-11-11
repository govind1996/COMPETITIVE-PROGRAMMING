#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,sum=0,ans,a;
        cin>>n;
        for(long int i=0;i<n-1;i++)
        {
            cin>>a;
            sum+=a;
        }
        ans=(n*(n+1)/2)-sum;
        cout<<ans<<endl;

    }
}
