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
        vector<long int>maxi(100005);
        vector<long int>amaxi(100005);
        vector<long int>mini(100005);
        vector<long int>amini(100005);
        for(long int i=0;i<n;i++)
        {
            long int m;
            cin>>m;
            long int arr[m];

            for(long int j=0;j<m;j++)
            {
                cin>>arr[j];
            }
            long int cmax=0,cmin=arr[0],amax,amin;
            for(long int j=0;j<m;j++)
            {
                if(arr[j]>=cmax)
                {
                    cmax=arr[j];
                    amax=arr[(j+1)%m];
                }
                if(arr[j]<=cmin)
                {
                    cmin=arr[j];
                    amin=arr[(j+1)%m];
                }
            }
            maxi[i]=cmax;
            amaxi[i]=amax;
            mini[i]=cmin;
            amini[i]=amin;
        }
        long int ans=0,p;
        if((abs(maxi[n-1]-mini[n-2]))>abs(mini[n-1]-maxi[n-2]))
        {
            p=amini[n-2];
            ans+=(n-1)*(abs(maxi[n-1]-mini[n-2]));
        }
        else
        {
            p=amaxi[n-2];
            ans+=(n-1)*(abs(mini[n-1]-maxi[n-2]));
        }

        for(long int i=n-3;i>=0;i--)
        {
            if((abs(maxi[i]-p))>abs(mini[i]-p))
            {

                ans+=(i+1)*(abs(maxi[i]-p));
                 p=amini[i];
                //cout<<ans<<"check"<<endl;

            }
            else
            {

                ans+=(i+1)*(abs(mini[i]-p));
                p=amaxi[i];
                //cout<<ans<<"check1"<<endl;
            }
        }
        cout<<ans<<endl;
    }
}
