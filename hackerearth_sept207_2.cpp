#include <bits/stdc++.h>
typedef long int ll;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> arr(100005);
    map<ll,ll> m;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(ll i=0;i<n;i++)
    {

        for(ll j=1;j<=sqrt(arr[i]);j++)
        {
            if(arr[i]%j==0)
                {
                    if(j==arr[i]/j)
                        m[j]++;
                    else
                    {
                        m[j]++;
                        m[arr[i]/j]++;
                    }
                }
        }
    }
    ll q,k;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        cin>>k;
        /*ll ans=0;
        for(ll j=0;j<n;j++)
        {
            if(arr[j]%k==0)
                ans++;

        }
        cout<<ans<<endl;*/
        cout<<m[k]<<endl;

    }
    return 0;
}

