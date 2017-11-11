#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        vector<long long int>a(10005,0);
       // vector<long long int>ans(100005,1);
        long long int ans=0;
        for(long int i=1;i<=n;i++)
            cin>>a[i];
        for(long int i=2;i<=n;i++)
            a[i]+=a[i-1];
        for(long int i=1;i<=n-1;i++)
        {
            for(long int j=i;j<=n-1;j++)
            {
                for(long int k=j+1;k<=n;k++)
                {
                    for(long int l=k;l<=n;l++)
                        ans=max(ans,abs(a[j]-a[i-1]-a[l]+a[k-1]));
                }
            }
        }
        cout<<ans<<endl;
    }
}
