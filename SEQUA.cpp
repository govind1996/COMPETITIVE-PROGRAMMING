#include<bits/stdc++.h>
using namespace std;
long long int modexponentation(long long int x,long long int n,long int m)
{
    if(n==0)
        return 1;
    long int nm=x%m;
    long long r=modexponentation(nm,n/2,m);
    r=(r*r)%m;
    if(n%2==0)
        return r;
    else
        return (r*nm)%m;

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int ans=1;


            for(long long int i=1;i<=n;i++)
            {
                ans=(ans+modexponentation(i,i,m))%m;
            }
            cout<<ans%m<<endl;

    }
}
