#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,rm,rn;
        cin>>n>>m;
        char s[20];
        cin>>s;
        int lmax=0,rmax=0,umax=0,dmax=0,l=0,u=0,r=0,d=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='L')
            {
                l++;
                r--;
                lmax=max(l,lmax);
            }
            else if(s[i]=='R')
            {
                l--;
                r++;
                rmax=max(r,rmax);
            }
            else if(s[i]=='D')
            {
                u--;
                d++;
                dmax=max(d,dmax);
            }
            else if(s[i]=='U')
            {
                d--;
                u++;
                umax=max(u,umax);
            }
        }
        rn=rmax+lmax+1;
        rm=umax+dmax+1;
        if(rm<=n&&rn<=m)
            cout<<"safe"<<endl;
        else
            cout<<"unsafe"<<endl;
    }
}
