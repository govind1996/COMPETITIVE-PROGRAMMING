#include<iostream>
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y;
    int s=x-y;
    cin>>n;
    int ans=0;
    int a;
    for(int i=0;i<n;i++)
    {
        ans++;
        cin>>a;
        a-=x;
        if(a%s!=0&&a>0)
        ans+=(a/s)+1;
        else if(a>0)
            ans+=a/s;
    }
    cout<<ans<<endl;
}
