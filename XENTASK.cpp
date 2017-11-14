#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int sum1=0,sum2=0,a;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(i%2==0)
                sum1+=a;
            else
                sum2+=a;
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(i%2==0)
                sum2+=a;
            else
                sum1+=a;
        }
        if(sum1>sum2)
            cout<<sum2<<endl;
        else
            cout<<sum1<<endl;
    }
    return 0;
}
