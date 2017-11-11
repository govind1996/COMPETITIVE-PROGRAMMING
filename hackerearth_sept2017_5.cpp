#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    vector<long long int> a(1000005);
    long long int y,len=0;
    long long int sum=1,ans=1;
    for(long long int i=0;i<x;i++)
    {
        cin>>y;
            a[i]=y%m;
            sum=(sum%m*(y+1)%m)%m;
            //cout<<"check"<<endl;

    }

        //cout<<"check"<<endl;
        for(long long int i=0;i<x;i++)
        {
            long long int b=a[i];
            b=(b%m*sum%m)%m;
            b=(b%m*500000004)%m;
            b=(b+1)%m;
            ans=(ans%m*b%m)%m;
        }
    cout<<ans%m<<endl;

}
