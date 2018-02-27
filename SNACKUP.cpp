#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int r[n];
        cout<<n<<endl;
        for(int i=0;i<n;i++)
            r[i]=i+1;
        for(int i=0;i<n;i++)
        {   cout<<n<<endl;
            int k=2*i;
            for(int j=1;j<=n;j++)
            {
                cout<<j<<" "<<r[(k)%n]<<" "<<r[(k+1)%n]<<endl;
                k++;


            }


        }
    }
}
