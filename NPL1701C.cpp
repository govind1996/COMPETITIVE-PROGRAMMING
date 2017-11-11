#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans=0,p=1;
        cin>>n;
        for(long int i=0;i<n;i++)
        {
            long int a;
            cin>>a;
            p*=a;

        }

//cout<<p<<endl;
long long int num=p;
            for(long long int i=2;i*i<=num;i++)
            {

                while(p%i==0)
                {
                  ans++;
                  p=p/i;
                }
    //            cout<<ans<<endl;
            }
  //          cout<<ans<<endl;
            ans-=n;
        if(ans%2==0)
            cout<<"Friend"<<endl;
        else
            cout<<"Appu"<<endl;

    }

}
