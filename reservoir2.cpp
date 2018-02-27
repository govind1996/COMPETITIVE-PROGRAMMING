#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,flag=1;
        cin>>n>>m;
        char s[n][m];
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                flag=1;
                if(s[i][j]=='W')
                {
                    if(j==m-1||s[i][j+1]=='A'||j==0||i==n-1||s[i+1][j]=='A'||s[i][j-1]=='A')
                    {
                        flag=0;
                        //cout<<"check"<<endl;
                        i=n+1;
                        j=m+1;
                    }
                }
                else if(s[i][j]=='A')
                {
                    if(s[i][j+1]=='W'||s[i][j-1]=='W')
                    {
                        flag=0;
                        //cout<<"check"<<endl;
                        i=n+1;
                        j=m+1;
                    }
                }
                else if(s[i][j]=='B')
                {
                    if(s[i+1][j]=='A'||s[i+1][j]=='W')
                    {
                        flag=0;
                        i=n+1;
                        j=m+1;
                    }
                }
            }
        }
        if(flag==0)
            cout<<"no"<<endl;
        else if(flag==1)
            cout<<"yes"<<endl;
    }
    return 0;
}
