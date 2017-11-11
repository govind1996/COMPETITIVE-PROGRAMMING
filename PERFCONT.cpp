#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,p;
        cin>>n>>p;
        long int x;
        int h=0,c=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>=p/2)
                c++;
            else if(x<=p/10)
                h++;

        }
        if(h==2&&c==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
