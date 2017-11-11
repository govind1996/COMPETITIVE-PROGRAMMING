#include <bits/stdc++.h>
using namespace std;
vector< vector<long int> > parent(1000005,vector<long int>(22,0));
vector<long int>adj[1000005];
void bfs()
{
    queue<long int>q;
    vector<bool> visited(1000005,0);
    q.push(1);
    visited[1]=1;
    while(!q.empty())
    {
        long int s=q.front();
        q.pop();
        for(long int i=0;i<adj[s].size();i++)
        {

            if(!visited[adj[s][i]])
            {
                q.push(adj[s][i]);
                visited[adj[s][i]]=1;
                parent[adj[s][i]][0]=s;
            }
        }
    }
}
int main()
{
	long int n,k,a,b;
	cin>>n>>k;
	vector<long int> color(1000005);
	color[0]=0;
	for(int i=1;i<=n;i++)
		cin>>color[i];

	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
    bfs();
	int logn = (int)(log(n)/log(2))+1;
	for(long int i=1;i<=n;i++)
	{
		for(int j=1;j<=logn+1;j++)
		{
			parent[i][j]=parent[parent[i][j-1]][j-1];
		}
	}
	//cout<<"-1 ";
	for(long int i=1;i<=n;i++)
	{
		long int kancestor=k;
		long int x=i;
		long int j=0;
		while(kancestor>0)
		{
			if(kancestor&1)
				x=parent[x][j];
			kancestor=kancestor>>1;
			j++;

		}
		if(color[i]==color[x])
			cout<<x<<" ";
		else
			cout<<"-1 ";
	}
	cout<<endl;
}

