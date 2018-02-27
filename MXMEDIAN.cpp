#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=n/2;
        int a[2*n],b[n];
        for(int i=0;i<2*n;i++)
            cin>>a[i];
        sort(a,a+2*n);
        int temp=a[2*n-1-m];
        cout<<temp<<endl;
        a[2*n-1-m]=a[2*(m+1)-1];
        a[2*(m+1)-1]=temp;
        int j=2*(m+1);
        while(a[j]==a[2*(m+1)-1])
            j++;
        temp=a[j];
        a[j]=a[2*(m+1)];
        a[2*(m+1)]=temp;
        for(int i=0;i<2*n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;

}

