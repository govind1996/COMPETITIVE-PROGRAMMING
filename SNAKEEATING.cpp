#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,q,i;
        scanf("%d%d",&n,&q);
        long int a[n];
        for (i=0;i<n;i++){
            scanf("%ld",&a[i]);
        }
        sort(a,a+n);
        while(q--)
        {
            long int k,temp,m=0;
            scanf("%ld",&k);
            for(i=0;i<n;i++)
            {
                if(a[i]>=k)
                {
                    temp=i;
                    i=n;
                    m=n-temp;
                }

            }
            int j=temp-1;
            temp--;
            while(temp>0)
            {
                temp=temp-k+a[j];
                j--;
                if(temp>=0)
                    m++;
            }
            cout<<m<<endl;

        }

    }
}
