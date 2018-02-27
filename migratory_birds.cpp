#include<iostream>
using namespace std;
int main()
{
    int f[5]={0},n,maxi=0,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        f[a[i]-1]++;
    }
    for(int i=0;i<5;i++)
    {
        if(f[i]>maxi)
          {
            maxi=f[i];
              ans=i+1;
          }
    }
    cout<<ans;
}
