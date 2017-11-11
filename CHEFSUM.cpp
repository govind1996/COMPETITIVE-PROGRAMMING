#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n],e=2,o=1;
        for(long int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                a[i]=i+2;
            }
            else
            {
               a[i]=i;
            }
        }
        if(n%2!=0)
        {
            a[n-1]=a[n-2];
            a[n-2]=n;
        }
        for(long int i=0;i<n-1;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;

    }
}
