#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
    	double a;
    	ll n,m;
        cin>>n>>m;
        if(m<0)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n==1&&m!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        // Main formula
        a=sqrt(((double)3*m*m*n)/((double)(n/2)*((n/2)+1)*(2*(n/2)+1)));
        if(n%2==1)
        {
            if(m==0)
            {
                for(ll i=-n/2;i<=n/2;i++)
                {
                    cout<<"0 ";
                }
            }
            else
            {
                for(ll i=-n/2; i<=n/2; i++)
                {
                    cout<<(float)i*a<<" ";
                }
            }
        }
        else
        {
            if(m==0)
            {
                for(ll i=-n/2;i<n/2;i++)
                {
                    cout<<"0 ";
                }
            }
            else
            {
                for(ll i=-n/2;i<0;i++)
                {
                    cout<<(float)i*a<<" ";
                }
                for(ll i=1;i<=n/2;i++)
                {
                    cout<<(float)i*a<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}