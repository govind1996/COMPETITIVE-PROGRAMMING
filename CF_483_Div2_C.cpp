
#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
     long int t;
     cin>>t;
     while(t--)
     {


     long long int n,m,b;
    cin>>n>>m>>b;
    long int c=gcd(n,m);
    m=m/c;
    bool flag=1;
    long long int j=sqrt(m);
    if(m%2==0)
    {
        if(2>b||b%2!=0)
        {
            flag=0;
           // break;
        }
        while(m%2==0)
            m=m/2;

    }
    for(long int i=3;i<=j;i+=2)
    {
        if(m%i==0)
        {
            if(i>b||b%i!=0)
            {
                flag=0;
                break;
            }
            while(m%i==0)
            {
                m=m/i;
            }
           // cout<<m<<" "<<flag<<endl;
        }
    }
    if(m>2)
    {
        if(m>b)
            flag=0;
        else if(b%m!=0)
            flag=0;
    }
    if(flag)
        cout<<"Finite"<<endl;
    else
        cout<<"Infinite"<<endl;
     }


}
