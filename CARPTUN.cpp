#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int sum=0;
        for(long int i=0;i<n;i++)
        {
            long int a;
            scanf("%ld",&a);
            if(a>sum)
                sum=a;
        }
        long int c,d,s;
        scanf("%ld%ld%ld",&c,&d,&s);
        double ans=c-1;
        ans=ans*sum;
        cout<<fixed<<setprecision(9)<<ans;
        cout<<endl;
    }
}
