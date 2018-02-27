#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1;
        int a[n1];
        for(int i=0;i<n1;i++)
            cin>>a[i];
        n2=n1+1;
        int b[n2];
        for(int i=0;i<n2;i++)
            cin>>b[i];
        sort(a,a+n1);
        sort(b,b+n2);
        int c=b[n2-1];
        for(int i=0;i<n1;i++)
        {
            if(a[i]!=b[i])
            {
                    if(a[i+1]==b[i])
                    c=a[i];
                    else
                        c=b[i];
                    break;

            }
        }
        cout<<c<<endl;

    }
}
