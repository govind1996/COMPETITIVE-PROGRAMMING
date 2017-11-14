#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}
int main()
{
    int t,n,m;
    cin>>t>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    while(t--)
    {
        cin>>m;
        int maxi=1;
        for(int i=0;i<n;i++)
            maxi=max(maxi,gcd(a[i],m));
            cout<<maxi<<endl;

    }
}
