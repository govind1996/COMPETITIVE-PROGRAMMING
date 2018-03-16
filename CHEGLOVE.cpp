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
        vector<long int>f(n);
        vector<long int>g(n);
        for(long int i=0;i<n;i++)
            cin>>f[i];
        for(long int i=0;i<n;i++)
            cin>>g[i];
      //  cout<<ans<<endl;
      int ans=0;
      bool flag=1;
        for(long int i=0;i<n;i++)
        {
            if(f[i]>g[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            ans+=1;
        flag=1;
        for(long int i=0;i<n;i++)
        {
            if(f[i]>g[n-1-i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            ans+=2;
        if(ans==1)
            cout<<"front"<<endl;
        else if(ans==2)
            cout<<"back"<<endl;
        else if(ans==3)
            cout<<"both"<<endl;
        else
            cout<<"none"<<endl;
    }
}


