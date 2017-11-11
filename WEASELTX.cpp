#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<long int> adj[200005];
vector<long long int> x(200005,0);
vector<long long int> qvalue(200005,0);
void DFSUtil(long int u, vector<bool> &visited)
{
    visited[u] = true;
   // cout << u << " ";
    for (long int i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false)
            {

                DFSUtil(adj[u][i],visited);
                x[u]^=x[adj[u][i]];
                //cout<<x[u]<<" "<<u<<endl;
            }
}
void DFS(long int V)
{
    vector<bool> visited(V, false);
    for (long int u=1;u<V; u++)
        if (visited[u] == false)
            DFSUtil(u,visited);
}
int main()
{
    long int n,q;
    long long int qmax=0;
    cin>>n>>q;


    for(long int i=0;i<n-1;i++)
    {
        long int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(long int i=0;i<n;i++)
        cin>>x[i];
    for(long int i=0;i<q;i++)
        {
            cin>>qvalue[i];
            qmax=max(qmax,qvalue[i]);
        }
        long long int ans[qmax+1];
        ans[0]=qvalue[0];
    for(long long int i=1;i<qmax+1;i++)
        ans[i]=0;
    for(long long int i=1;i<qmax+1;i++)
    {
        for(long int j=0;j<n;j++)
            ans[i]^=x[j];
            //cout<<ans[i]<<endl;
        DFS(n);
        x[0]=ans[i];
        //cout<<ans[i]<<endl;
    }
    for(long int i=0;i<q;i++)
    {
        cout<<ans[qvalue[i]]<<endl;
    }
}
