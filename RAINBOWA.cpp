#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=1,flag=1;
        cin>>n;
        int arr[n];
        int startcount[8]={0},endcount[8]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int currnum=1;
        for(int i=0;i<n;i++)
        {
           if(flag)
            {
                if(arr[i]==currnum)
                {
                    startcount[currnum]++;
                }
                else
                {
                    if(currnum==7)
                    {
                        currnum=6;
                        flag=0;
                    }
                    else if(arr[i]!=currnum+1)
                    {
                        ans=0;
                        //cout<<ans<<endl;
                        break;
                    }
                    else
                    {
                        currnum++;
                        startcount[currnum]++;
                    }
                }
           }

           if(!flag)
           {
                 if(arr[i]==currnum)
                {
                    endcount[currnum]++;
                }
                else
                {

                    if(arr[i]!=currnum-1)
                    {
                        ans=0;
                     //   cout<<ans<<endl;
                        break;
                    }
                    else
                    {
                        currnum--;
                        endcount[currnum]++;
                    }
                }
           }
        }
       // cout<<ans<<endl;
        for(int i=1;i<=6;i++)
        {
            if(startcount[i]!=endcount[i])
                ans=0;
        }
        if(ans)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
