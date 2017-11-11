#include<bits/stdc++.h>
int a[6][6];
bool mark[6]={0};
int cnt=0;
using namespace std;
int solve(int s)
{
    if(cnt==6)
        return 1;
    for(int i=0;i<6;i++)
    {
        if(a[s][i]==1)
        {
            cnt+=2;
            for(int j=0;j<6;j++)
                {

                    if(a[j][i])
                        a[j][i]=2;
                    if(a[j][s])
                        a[j][s]=2;
                }
            a[s][i]=1;
            a[i][s]=1;
            mark[s]=1;
            mark[i]=1;
            int k=-1,l=0;
            while(mark[l]&&l<6)
                l++;
            k=l;
            if(k!=6)
            {
                if(solve(k))
                    return 1;
                else
                {
                    cnt-=2;
                    for(int j=0;j<6;j++)
                       {
                         if(a[j][i]==2)
                            a[j][i]=1;
                         if(a[j][i]==2)
                         a[j][s]=1;
                       }
                    a[s][i]=0;
                    a[i][s]=0;
                    mark[s]=0;
                    mark[i]=0;
                }
            }
            else
                return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=1,o=0;
        for(int i=0;i<6;i++)
            mark[i]=0;
        cnt=0;
        cin>>n;
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {
                if(i==j)
                    a[i][j]=0;
                else
                    a[i][j]=1;
            }
        }
        int x;
        cin>>x;
        for(int i=1;i<n;i++)
        {
            int y;
            cin>>y;
            if(x==y)
            flag=0;
            a[x-1][y-1]=0;
            a[y-1][x-1]=0;
            x=y;

        }
        if(flag==0)
            cout<<"-1"<<endl;
        else if(n!=1)
        {
            if(solve(0))
                {
                    for(int i=0;i<6;i++)
                    {
                        for(int j=0;j<6;j++)
                        {
                            if(a[i][j]==1&&o<=6)
                                {
                                    cout<<j+1<<" ";
                                    o++;
                                }
                        }
                    }
                    cout<<endl;
                }
                else
                    cout<<"-1"<<endl;
        }
        else
        {
            cout<<"2 1 4 3 6 5"<<endl;
        }
    }
}
