#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max1,min1;
        cin>>n;
        int a[n];
        cin>>a[0];
        max1=a[0];
        min1=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max1)
                max1=a[i];
            if(a[i]<min1)
                min1=a[i];
        }
        cout<<abs(max1-min1)<<endl;
    }
}
