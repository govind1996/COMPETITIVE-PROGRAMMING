#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,h;
        cin>>n>>h;
        long int sum=0;
        vector<long int>v(n);
        long int maxi=0;
        for(long int i=0;i<n;i++)
            {
                cin>>v[i];
                sum+=v[i];
                maxi=max(maxi,v[i]);
            }
       // sort(v.begin(),v.begin()+n);
        if(h==n)
        {
            cout<<maxi<<endl;
            continue;
        }
        long int start=sum/h;
        if(start==0)
        {
            cout<<1<<endl;
            continue;
        }
        long int last=maxi;
        long int dif=h-n;
        long int ans=maxi;
        while(start<last)
        {
            long int mid=(start+last)/2;
            bool flag=1;
            long int ch=0;
            long int cd=0;
            for(long int i=0;i<n;i++)
            {
                if(v[i]%mid==0)
                    {
                        ch+=v[i]/mid;
                        cd+=v[i]/mid-1;
                       // if(v[i]/mid==1)
                         //   flag=0;
                    }
                else
                    {
                        ch+=v[i]/mid+1;
                        cd+=v[i]/mid;
                       // if((v[i]/mid+1)==1)
                          //  flag=0;
                    }
                if(cd>dif)
                {
                    start=mid+1;
                    flag=0;
                    break;
                }
//                if(!flag)
//                {
//                    last=mid;
//                    ans=min(ans,mid);
//                    break;
//                }

            }
            if(flag)
            {
                ans=min(ans,mid);
                last=mid;
            }
        }
        cout<<ans<<endl;
    }
}
