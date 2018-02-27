#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,cnt=0;
        cin>>n;
        int a[n],b[n+1];
        //for(int i=0;i<n+1;i++)
         //   b[n]=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=i+1)
                cnt++;
            b[a[i]]=1;
        }
        for(int i=1;i<n+1;i++)
        {
            if(b[i]!=1)
            {
                flag=1;
                break;
            }
        }

        if(flag==0&&cnt!=0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
