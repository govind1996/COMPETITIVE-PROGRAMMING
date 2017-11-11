#include<bits/stdc++.h>
using namespace std;
long int n,q,a,b,v;
vector<long int> Neighbour[10000];
vector<long int> Cost[10000];
map<long int,long int> Mat;
vector<int> Marked;
bool Odd(int n)
{
    if(n%2!=0)
        return 1;
    else
        return 0;
}
bool IsGood(long int v,int id)
    {
        int m,c;
        for(long int i=0;i<Neighbour[v].size();i++)
        {
            m=Neighbour[v][i];
            c=Cost[v][i];
            if(c==0)
            {
                if(Marked[m]!=0)
                {
                    if(Odd(Marked[m])^Odd(id))
                    {
                        return 0;
                    }
                    continue;
                }
                Marked[m]=id;
                if(!IsGood(m,id))
                return 0;
            }
                else
                {
                    if(Marked[m]!=0)
                    {
                        if (!(Odd(Marked[m])^Odd(id)))
                            return 0;
                        continue;
                    }
                    Marked[m]=id+1;
                    if(!(IsGood(m,id+1)))
                        return 0;
                }

        }
        return 1;
    }
bool Solve()
{

    int id;
    fill(Marked.begin(),Marked.end(),0);
    for(long int i=1;i<=n;i++)
        if(Marked[i]==0)
        {
            id=1;
            if(!IsGood(i,id))
                return 0;
        }
    return 1;
}
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>q;
        for(long int i=0;i<q;i++)
        {
            cin>>a>>b>>v;
            Neighbour[a].push_back(b);
            Cost[a].push_back(v);
            Neighbour[b].push_back(a);
            Cost[b].push_back(v);
            Mat[a*(n+1)+b]=v;
            Mat[b*(n+1)+a]=v;
        }
            if(Solve)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
            Neighbour[10000].clear();
            Cost[10000].clear();
            Mat.clear();
            Marked.clear();

    }
}
