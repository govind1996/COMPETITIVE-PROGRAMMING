#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,k;
        vector<bool>a(200005,0);
        cin>>n>>k;
        for(long int i=0;i<n;i++)
        {
            long int x;
            cin>>x;
            a[x]=1;
        }
        long int cmax;
        for(long int i=0;i<200005;i++)
        {
            if(!a[i])
            {
                cmax=i;
                k--;
                if(k<0)
                    i=200005;
            }
        }
        cout<<cmax<<endl;
    }
}
