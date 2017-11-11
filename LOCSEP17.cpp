#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long int> s(1000006,0);
    for(long int i=2;i*i<=1000001;i++)
    {
        if(!s[i])
        {
            long int a=i,sum=0;
            while(a)
            {
                int rem=a%10;
                sum+=rem;
                a/=10;
            }
            for(long int j=i;j<1000001;j+=i)
                s[j]+=sum;
        }
    }
  //  cout<<s[12]<<" "<<s[11];
    long int t;
    cin>>t;
    while(t--)
    {
        long int l,r;
        cin>>l>>r;
        long int ans=0;
        for(long int i=l;i<=r;i++)
            ans+=s[i];
        cout<<ans<<endl;
    }
}
