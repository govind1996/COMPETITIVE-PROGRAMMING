#include <iostream>
using namespace std;

int main()
{
    long long int p,l,r,n,ans=0;;
    bool a[10];
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        a[q]=1;
    }
    if(p>r)
    {
        cout<<0<<endl;
        return 0;
    }
    for(long long int i=p;i<=r;i+=p )
    {
        long long int z=i;
        while(z)
        {
            int rem=z%10;
            if(!a[rem])
            break;
            z=z/10;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
