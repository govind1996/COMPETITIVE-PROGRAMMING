#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int n,k,flag=0,total,ans=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                flag=1;
        }
        if(flag)
            total=n;
        else
            total=n+1;
            int remor=1<<k-total;
        if(remor>=total)
        {
            ans+=remor/total;
            remor=remor%total;
        }
        ans++;
        cout<<ans<<endl;
    }

}
