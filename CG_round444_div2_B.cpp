#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[10]={0};
    for(int i=0;i<n;i++)
    for(int j=0;j<6;j++)
    {
        int x;
        cin>>x;
        a[x]++;

    }
    int m=4,ind;
    for(int i=1;i<10;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
            ind=i;
        }
    }
    if(m==0)
    {
        cout<<ind-1<<endl;
    }
    if(m==1)
    {
        int ans;
        if(a[0]>=1)
        ans=10*ind+ind-1;
        else
            ans=9;
        cout<<ans<<endl;
    }
    if(m==2)
    {
        int ans;
        if(a[0]>=2)
        ans=100*ind+10*ind+ind-1;
        else if(a[0]>=1)
        ans=99;
        else
            ans=9;
        cout<<ans<<endl;
    }
    if(m==3)
    {
        int ans;
        if(a[0]>=3)
            ans=1000*ind+100*ind+10*ind+ind-1;
        else if(a[0]>=2)
            ans=999;
        else if(a[0]>=1)
            ans=99;
        else
            ans=9;
        cout<<ans<<endl;
    }
}
