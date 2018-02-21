#include<bits/stdc++.h>
using namespace std;
vector<vector <long int> > mark(100005,vector<long int>(105,0));
int main()
{
    long int n,m,q;
    cin>>n>>m>>q;
    vector<int> color(100005);
    vector<long int> cnt(100005,0);
    for(long int i=0;i<n;i++)
        cin>>color[i];
    vector< pair<long int,long int> >edges;
    for(long int i=0;i<m;i++)
    {
        long int a,b;
        cin>>a>>b;
        edges.push_back(make_pair(a,b));
        if(!mark[a][color[b-1]])
        {
            cnt[a-1]++;
        }
        mark[a][color[b-1]]++;
        if(!mark[b][color[a-1]])
        {
            cnt[b-1]++;
        }
        mark[b][color[a-1]]++;
         if(!mark[a][color[a-1]])
        {
            cnt[a-1]++;
        }
        mark[a][color[a-1]]++;
        if(!mark[b][color[b-1]])
        {
            cnt[b-1]++;
        }
        mark[b][color[b-1]]++;
    }
    for(long int i=0;i<q;i++)
    {
        long int a,b;
        cin>>a>>b;
        if(a==1)
        {
            long int v1=edges[b-1].first;
            long int v2=edges[b-1].second;
            edges[b-1].first=0;
            edges[b-1].second=0;
            if(v1!=0&&v2!=0)
            {
                mark[v1][color[v2-1]]--;
                if(!mark[v1][color[v2-1]])
                    cnt[v1-1]--;
                mark[v2][color[v1-1]]--;
                if(!mark[v2][color[v1-1]])
                    cnt[v2-1]--;

            }
        }
        else
        {
            cout<<cnt[b-1]<<endl;
        }
    }
}
