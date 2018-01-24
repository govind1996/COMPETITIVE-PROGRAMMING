#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ans=0;
    vector<long long int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        long long int num=a[i];
        while(num%2==0)
        {
            num=num/2;
            ans+=num;
        }
        for(long long int j=3;j<=sqrt(num);j+=2)
        {
            while(num%j==0)
            {
                num=num/j;
                ans+=num;
            }
        }
        if(num>2)
            ans+=1;
        ans+=a[i];
    }
    cout<<ans<<endl;
}
