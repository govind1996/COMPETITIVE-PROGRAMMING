#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long int sum=(b+c);
        long long int ans=0;
        int arr[5];
        arr[0]=sum%10;
        for(int i=1;i<=4;i++)
        {
            arr[i]=(arr[i-1]+sum)%10;
            sum=sum+arr[i-1];
        }
        long long int sum1=arr[1]+arr[2]+arr[3]+arr[4];
        if(a>=8)
        {
         long long int len=a-3;
         long long int rem=len/4;
            ans=b+c+arr[0]+rem*sum1;
            len=len-rem*4;
            for(int i=1;i<=len;i++)
                ans+=arr[i];
        }
        else
        {
            long int len=a-2;
            ans+=b+c;
            for(int i=0;i<len;i++)
                ans+=arr[i];
        }
        if(ans%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

