#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long int maxn=INT_MIN,minn=INT_MAX,maxp,minp;
    for(long int i=1;i<=n;i++)
    {
        long int num;
        cin>>num;
        if(num<=minn)
        {
            minn=num;
            minp=i;
        }
        if(num>maxn)
        {
            maxn=num;
            maxp=i;
        }
    }
    long int ans=maxp-1;
    if(minp<maxp)
        minp++;
    ans+=n-minp;
    cout<<ans<<endl;
}
