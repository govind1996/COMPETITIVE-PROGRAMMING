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
        vector<long int> fs(n,n-1);
        vector<long int> bs(n,0);
        vector<long int> sum(n+1,0);
        vector<long int> ans(n+2,0);
     //   vector<long int> ans1(n,0);
        for(long int i=0;i<n;i++)
        {
            scanf("%ld",&arr[i]);
            sum[i+1]=sum[i]+arr[i];
        }
        long int p;
        fs[n-1]=n-1;
        for(long int i=n-2;i>=0;i--)
        {

                long long int s=2*arr[i+1];
                p=i+1;
                //long int k=i+1;
                while(i!=n-2&&p!=n-1)
                {

                    if(arr[i]>s)
                    {
                        p=fs[p];
                        s+=2*arr[p];
                    }
                    else
                        {
                            p=fs[p];
                            break;
                        }

                }
                p=p+1;
                if(p>=n)
                    p=n-1;
                for(long int j=p;j>i;j--)
                {
                    if(sum[j]-sum[i+1]<=arr[i])
                    {
                    ans[i+1]+=1;
                    ans[j+1]-=1;
                    fs[i]=j;
                  //  p=j;
                    break;
                    }
                }


        }
      //  p=n-1;
        for(long int i=1;i<n;i++)
        {

                long long int s=2*arr[i-1];
                p=i-1;
                while(i!=1&&p!=0)
                {
                    if(arr[i]>s)
                    {
                        p=bs[p];
                        s+=2*arr[p];
                    }
                    else
                        {
                            p=bs[p];
                            break;
                        }

                }
                p-=1;
                if(p<0)
                    p=0;
                for(long int j=p;j<i;j++)
                {
                    if(sum[i]-sum[j+1]<=arr[i])
                    {
                        ans[j]+=1;
                        ans[i]-=1;
                        bs[i]=j;
                        break;
                    }
                }

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
