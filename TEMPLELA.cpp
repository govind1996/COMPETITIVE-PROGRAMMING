#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    while(s--)
    {
        int n,flag=1;
        cin>>n;
         int k=(n/2)+1;
            int p=k-1;
            int a;
            for(int i=1;i<=n;i++)
            {
                cin>>a;
                if(i<=k&&i==a)
                    continue;
                else if(i>k&&a==p--)
                    continue;
                else
                {
                    flag=0;
                }
            //    cout<<flag<<endl;
            }
            if(flag&&n%2==1)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;

    }
    return 0;
}

