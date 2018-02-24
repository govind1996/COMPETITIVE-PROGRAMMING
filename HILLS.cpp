#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,u,d;
        cin>>n>>u>>d;
        vector<long int>arr(n);
        for(long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long int ans =1;
        bool p=1;
        for(long int i=0;i<n-1;i++)
        {
            long int x=arr[i];
            long int y=arr[i+1];
            if(y>x)
            {
                if(y-x<=u)
                {

                    ans=i+2;
                }
                else
                {
                    //ans=i+1;
                    i=n;
                    break;
                }
            }
            else
            {
                if(x-y<=d)
                {

                    ans=i+2;
                }
                else
                {
                    if(p)
                    {
                       // c=h;
                        p=0;
                        ans=i+2;
                    }
                    else
                    {
                       // ans=i+1;
                       i=n;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
