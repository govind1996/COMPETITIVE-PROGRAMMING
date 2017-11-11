#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int y,n1,n2;
        cin>>y;
        n1=sqrt(y);
        n2=sqrt(y-700);
        long long int ans1=y*n1,ans3;
        ans1=ans1-(n1*(n1+1)*(2*n1+1))/6;
        if(y>700)
        {
            long int ans2=y*n2;
            ans2=ans2-(n2*(n2+1)*(2*n2+1))/6;
            ans3=ans1-ans2+700*n2;
            cout<<ans3<<endl;
        }
        else
        cout<<ans1<<endl;
    }
}
