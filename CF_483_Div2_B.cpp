#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++)
        {
            string st;
            cin>>st;
            for(long int j=0;j<st.length();j++)
            {
                if(st[j]=='.')
                    mat[i][j]=0;
                else if(st[j]=='*')
                    mat[i][j]=10;
                else
                    mat[i][j]=st[j]-'0';
            }
        }
  /*  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    } */
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]>=0&&mat[i][j]<=8)
            {
                int cur=0;
                int lr=max(0,i-1);
                int rr=min(n-1,i+1);
                int lc=max(0,j-1);
                int rc=min(m-1,j+1);
                for(int k=lr;k<=rr;k++)
                {
                    for(int l=lc;l<=rc;l++)
                        if(mat[k][l]==10)
                        cur++;
                }
            //    cout<<i<<" "<<j<<" "<<cur<<endl;
                if(cur!=mat[i][j])
                {
                    flag=0;
                    break;
                }
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
