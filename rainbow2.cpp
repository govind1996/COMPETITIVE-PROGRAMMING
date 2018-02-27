
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],consecutive=1,pallindrome=1,every=1;;
        bool mark[8]={0};
        //int startcount[8]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int currnum=1;
        for(int i=0;i<n;i++)
        {
           if(currnum==arr[i])
            mark[currnum]=1;
           if(arr[i]!=currnum)
           {
               if(currnum==7)
               {
                   break;
               }
               else if(arr[i]==currnum+1)
               {
                   currnum++;
                    mark[currnum]=1;
               }
               else
               {
                   consecutive=0;
                   break;
               }
            }
        }
        for(int i=1;i<=7;i++)
        {
            if(!mark[i])
                every=0;
        }
        for(int i=0;arr[i]!=7&&arr[n-1-i]!=7;i++)
        {
            if(arr[i]!=arr[n-1-i])
            {
                pallindrome=0;
                break;
            }
        }
        if((every==1&&pallindrome==1)&&consecutive==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
