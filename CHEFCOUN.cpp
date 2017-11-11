#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int x=4294967296;
        long int y=x/n;
        long int z=x-y*n;
        cout<<"1"<<" ";
        for(long int i=1;i<n;i++)
        {

                if(z>0)
                {
                    cout<<y+1<<" ";
                    z--;
                }
                else
                    cout<<y<<" ";
        }
        cout<<endl;

    }
}
