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
        double ans=0;
        for(long int i=0;i<n;i++)
        {
            double p,q,x;
            cin>>p>>q>>x;
            ans=ans+(q*p*x*x);
        }
      //  cout<<ans<<endl;
        ans=ans/10000;
        printf("%.7lf \n",ans);
    }
}

