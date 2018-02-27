#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<pair<int, int> > > adj(100000);
int ans=0;
void addedge(int u,int v,int c)
{

    adj[u].push_back(make_pair(v,c));
    adj[v].push_back(make_pair(u,c));
}
void start2(int s,int d,int k,int n,bool visited[],int path[],int &pathindex,int wt)
{
    visited[s]=true;
    path[pathindex]=wt;
    pathindex++;
   // cout<<"check"<<endl;
    if(s==d)
    {
       // ans=adj[path[0]][0].second;
        //cout<<"check1"<<endl;
        for(int i=0;i<pathindex;i++)
        {

            if(path[i]<=k)
                {
                    ans^=path[i];
                   // cout<<adj[path[i]][0].second<<" "<<adj[path[i]][0].first<<endl;
                }
               // cout<<path[i]<<endl;
        }
        return ;

    }
    else
    {

        for (vector<pair<int,int> >:: iterator it = adj[s].begin(); it!= adj[s].end(); ++it)
           {

               // cout<<visited[2]<<endl;
            if (!visited[it->first])
               {
                  // cout<<it->first<<" "<<visited[it->first]<<endl;
                 // cout<<"check2"<<endl;
                   start2(it->first, d,k,n, visited, path, pathindex,it->second);
               }
           }
    }
    pathindex--;
    visited[s] = false;
}
void start(int s,int d,int k,int n)
{
    bool *visited=new bool[n+1];
    int *path=new int[n];
    int pathindex=0;
    for (int i = 0; i < n+1; i++)
        visited[i] = false;
    start2(s,d,k,n,visited,path,pathindex,0);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;

        for(int i=0;i<n-1;i++)
        {
            int u,v,c;
            cin>>u>>v>>c;
            addedge(u,v,c);

        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int u,v,k;
            cin>>u>>v>>k;
            start(u,v,k,n);
            cout<<ans<<endl;
            ans=0;
        }

        adj.clear();
        adj.resize(100000);
        ans=0;
    }
}
