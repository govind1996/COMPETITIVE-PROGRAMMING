#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        vector<long int> arr(n);
      //  vector<long int> fs;
       // vector<long int> bs;
        vector<long int> sum(n+1,0);
        vector<long int> ans(n+2,0);
     //   vector<long int> ans1(n,0);
        for(long int i=0;i<n;i++)
        {
            scanf("%ld",&arr[i]);
            sum[i+1]=sum[i]+arr[i];
        }
        bool flag=1;
        for(long int i=0;i<n-1;i++)
        {
            for(long int j=i+1;j<n;j++)
            {
                if(sum[j]-sum[i+1]>arr[i])
                {
                    ans[i+1]+=1;
                    ans[j]-=1;
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                ans[i+1]+=1;
                ans[n]-=1;
            }
            flag=1;
        }
        flag=1;
        for(long int i=n-1;i>0;i--)
        {
            for(long int j=i-1;j>=0;j--)
            {
                if(sum[i]-sum[j+1]>arr[i])
                {
                    ans[j+1]+=1;
                    ans[i]-=1;
                    flag=0;
                    break;
                }

            }
            if(flag)
                {
                    ans[0]+=1;
                    ans[i]-=1;
                }
                flag=1;
        }
        for(long int i=1;i<=n+1;i++)
            ans[i]+=ans[i-1];
      //  cout<<ans1[n-1];
       // cout<<endl;
        for(long int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
