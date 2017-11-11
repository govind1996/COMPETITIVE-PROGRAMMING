#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long long int n,q,l1,r1,ans=0,c=0,d=0,l,r;
    cin>>n>>q>>l1>>r1;
    vector<long long int> v(n,0);
    while(q--)
    {
        long long int x;
        cin>>x>>l>>r;
        if(x==1)
            v[l-1]=r;
        if(x==2)
        {
            vector<long long int> v1(r-l+1,0);
            //for(long long int i=0;i<v.size();i++)
               // cout<<v[i]<<" ";
            long long int j=0;
            for(long long int i=l-1;i<r;i++)
            {

                if(v[i]>r1)
                    v1[j]=-2;
                else if(v[i]<l1)
                    v1[j]=-1;
                else
                    v1[j]=1;
                    j++;
            }
            //for(long long int i=0;i<v1.size();i++)
               // cout<<v1[i]<<" ";
            //cout<<endl;
            for(long long int i=0;i<v1.size();i++)
            {
                if(v1[i]==1)
                {
                    c++;
                    ans-=(d*(d+1))/2;
                    d=0;
                }
                if(v1[i]==-1)
                    {
                        c++;
                        d++;
                    }
                if(v1[i]==-2)
                {
                    ans+=(c*(c+1))/2;
                    ans-=(d*(d+1))/2;
                    c=0;
                    d=0;
                }

                //cout<<v1[i]<<" "<<c<<" "<<d<<endl;
            }
             ans+=(c*(c+1))/2;
                ans-=(d*(d+1))/2;

            cout<<ans<<endl;
            c=0;d=0;ans=0;
        }
    }
}
