#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(int i=1;i<n;i++)
    {
        a[0][i]+=a[0][i-1];
        a[i][0]+=a[i-1][0];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
            a[i][j]+=min(a[i-1][j],a[i][j-1]);
    }
}
