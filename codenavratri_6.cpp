#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int m,nodes=0;
    long int n,a,b;
    cin>>n>>m;
    vector<long long int> f(150005,0);
    vector<bool> t(150005,0);
    bool flag=1;
    for(long long int i=0;i<m;i++)
    {
        cin>>a>>b;
        f[a]++;
        f[b]++;
        if(!t[a])
        {
            nodes++;
            t[a]=1;
        }
        if(!t[b])
        {
            nodes++;
            t[b]=1;
        }
    }
    //long long int val=(nodes*(nodes-1)*(nodes-2))/6;
    nodes--;
    for(long int i=0;i<f.size();i++)
    {
        if(t[i])
        {
            if(f[i]!=nodes&&f[i]>=2)
            {
                flag=0;
                i=n+1;
            }
        }
    }
    if(flag&&m>2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
