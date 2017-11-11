#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    bool flag1=1;
    cin>>m>>s;
    int l[101]={0};
    int h[101]={0};
    l[0]=1;
    int hs=s,ls=s-1;
    if(s<1||s>m*9)
        flag1=0;
    else
    {
        for(int i=m-1;ls>0&&i>=1;i--)
        {
            if(ls>9)
            {
                l[i]=9;
                ls-=9;
            }
            else
            {
                l[i]=ls;
                ls=0;
            }
        }
        if(ls>0)
            l[0]+=ls;

        for(int i=0;hs>0;i++)
        {
            if(hs>9)
            {
                h[i]=9;
                hs-=9;
            }
            else
            {
                h[i]=hs;
                hs=0;
            }
        }
    }
    if(flag1!=1)
        {
            if(m==1&&s==0)
                cout<<"0 0"<<endl;
            else
            cout<<"-1 -1"<<endl;
        }
    else
    {
        for(int i=0;i<m;i++)
            cout<<l[i];
        cout<<" ";
        for(int i=0;i<m;i++)
            cout<<h[i];
    }

}
