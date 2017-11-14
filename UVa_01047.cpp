#include<bits/stdc++.h>
int main()
{
    int n,a;
    while((scanf("%d %d",&n,&a))&&(n||b))
    {
       long int tower[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&tower[i]);
        int m;
        scanf("%d",&m);
        map<int,int> common;
        for(int i=0;i<m;i++)
        {
            int t;
            long int p=0;
            cin>>t;
            for(int j=0;j<t;j++)
            {
                int x;
                cin>>x;
                p|=(1<<x);
            }
            int num;
            cin>>num;
            common[p]=num;
        }


    }
}
