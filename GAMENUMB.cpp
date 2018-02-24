#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        vector<long int>a(n+5);
        vector<long int>d(k);
        vector<long int>b(n+5);
        map<long int,long int>m;
        vector<bool> flag(1000005,0);
        for(long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int tsum=0,sume=0,sumo=0,sum=0;
        for(long int i=0;i<n;i++)
        {
            cin>>b[i];
            tsum+=b[i]*a[i];
            if(flag[a[i]]==0)
            {
                m.insert(make_pair(a[i],b[i]));
                flag[a[i]]=1;
            }
            else
                m[a[i]]+=b[i];
            sum+=b[i];
        }
        sort(a.begin(),a.begin()+n);
//long int sum=0;
        for(long int i=0;i<k;i++)
        {
            cin>>d[i];
           // sum+=d[i];
        }
       // cout<<sum<<endl;
        for(long int i=0;i<k;i++)
           {
             //cin>>d[i];
             if(i%2==0)
                sume+=sum-d[i];
             else
                sumo+=sum-d[i];
            sum=d[i];

           }
         //  cout<<sume<<endl;
        long int start=0;
       // cout<<tsum<<endl;
        while(sume)
        {
            long int cc=m[a[start]];
           // cout<<cc<<endl;
            if(cc>sume)
            {
                tsum-=sume*a[start];
                m[a[start]]-=sume;
                sume=0;
            }
            else
            {
                tsum-=cc*a[start];
                m[a[start]]=0;
                start++;
                sume-=cc;
            }
        }
     //   cout<<tsum<<" "<<sumo<<endl;

        long int last=n-1;
        while(sumo)
        {
            long int cc=m[a[last]];
            if(cc>sumo)
            {
                tsum-=sumo*a[last];
                m[a[last]]-=sumo;
                sumo=0;
            }
            else
            {
                tsum-=cc*a[last];
                m[a[last]]=0;
                last--;
                sumo-=cc;
            }
        }
        cout<<tsum<<endl;

    }
}
