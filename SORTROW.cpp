#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n],b[n*n];
    for(int i=0;i<n*n;i++)
    {

            scanf("%d",&b[i]);
    }
        sort(b,b+n*n);
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",b[k]);
            k++;
        }
        printf("\n");
    }
    return 0;
}
