#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long int a,b,r1,r2,s=0,p=0,d=0,temp;
cin>>a>>b;
if(b>a)
    {
        temp=a;
        a=b;
        b=temp;
    }
while(a>0 )
{
r1=a%10;
r2=b%10;
a=a/10;
b=b/10;
d=(r1+r2)%10;
s=s+(d*pow(10,p++));
}
cout<<s<<endl;
}
}
