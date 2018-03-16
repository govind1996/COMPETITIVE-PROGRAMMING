#include<bits/stdc++.h>
using namespace std;
long int n;
struct seg
{
    long int peri=0;
    vector<long int>vect;
};
bool check(long int a,long int b,long int c)
{
    if(a+b>c&&b+c>a&&c+a>b)
        return 1;
    else
        return 0;
}
void build(vector<long int>&a ,seg tree[],long int start,long int last,long int node)
{
            if(start==last)
                tree[node].vect.push_back(a[start]);
            else
            {
                vector<long int> temp;long int mid=start+(last-start)/2;build(a,tree,start,mid,2*node+1);build(a,tree,mid+1,last,2*node+2);
                for(vector<long int>::iterator i=tree[2*node+1].vect.begin();i!=tree[2*node+1].vect.end();i++)
                temp.push_back(*i);
                for(vector<long int>::iterator i=tree[2*node+2].vect.begin();i!=tree[2*node+2].vect.end();i++)
                temp.push_back(*i);
                sort(temp.begin(),temp.end());
                long int mini=0;bool flag=0;
                for(long int j=temp.size()-1;j>1;j--)
                {
                    if(check(temp[j],temp[j-1],temp[j-2]))
                    {
                        tree[node].peri=temp[j]+temp[j-1]+temp[j-2];mini=temp[j-2];flag=1;temp.clear();break;
                    }
                        //j--;
                }
                   for(vector<long int>::iterator i=tree[2*node+1].vect.begin();i!=tree[2*node+1].vect.end();i++)
                    {
                        if(*i>=mini)
                            tree[node].vect.push_back(*i);
                    }

                    for(vector<long int>::iterator i=tree[2*node+2].vect.begin();i!=tree[2*node+2].vect.end();i++)
                    {
                        if(*i>=mini)
                            tree[node].vect.push_back(*i);
                    }
                }
}
void update(vector<long int>&a,seg tree[],long int start,long int last,long int node,long int pos,long val)
{
            if(start==last)
            {
                tree[node].vect.clear();a[pos]=val;tree[node].vect.push_back(val);
            }
            else
            {

                long int mid=start+(last-start)/2;
                if(pos<=mid&&start<=pos)
                    update(a,tree,start,mid,2*node+1,pos,val);
                else
                    update(a,tree,mid+1,last,2*node+2,pos,val);
                long int mini=0;
                vector<long int> temp;
                for(vector<long int>::iterator i=tree[2*node+1].vect.begin();i!=tree[2*node+1].vect.end();++i)
                temp.push_back(*i);
                for(vector<long int>::iterator i=tree[2*node+2].vect.begin();i!=tree[2*node+2].vect.end();++i)
                temp.push_back(*i);
                sort(temp.begin(),temp.end());bool flag=0;
                for(long int j=temp.size()-1;j>1;j--)
                {
                    if(check(temp[j],temp[j-1],temp[j-2]))
                    {

                        tree[node].peri=temp[j]+temp[j-1]+temp[j-2];
                        mini=temp[j-2];flag=1;temp.clear();break;
                    }
                       // j--;
                }
                tree[node].vect.clear();
                for(vector<long int>::iterator i=tree[2*node+1].vect.begin();i!=tree[2*node+1].vect.end();++i)
                    {
                        if(*i>=mini)
                            tree[node].vect.push_back(*i);
                    }
                for(vector<long int>::iterator i=tree[2*node+2].vect.begin();i!=tree[2*node+2].vect.end();++i)
                    {
                        if(*i>=mini)
                            tree[node].vect.push_back(*i);
                    }

            }
}
seg query(seg tree[],long int start,long int last,long int l,long int r,long int node)
{
            if(l>last||r<start)
            {
                seg temp;
                temp.peri=0;
                return temp;
            }
            if(l<=start&&last<=r)
                return tree[node];
            vector<long int>temp1;long int mini=0;seg x,y,z;long int mid=start+(last-start)/2;y=query(tree,mid+1,last,l,r,2*node+2);x=query(tree,start,mid,l,r,2*node+1);
            for(vector<long int>::iterator i=x.vect.begin();i!=x.vect.end();++i)
                temp1.push_back(*i);
            for(vector<long int>::iterator i=y.vect.begin();i!=y.vect.end();++i)
                temp1.push_back(*i);
            sort(temp1.begin(),temp1.end());

            bool flag=0;
            z.peri=0;
            for(long int j=temp1.size()-1;j>1;j--)
            {
                if(check(temp1[j],temp1[j-1],temp1[j-2]))
                {

                    z.peri=temp1[j]+temp1[j-1]+temp1[j-2];mini=temp1[j-2];flag=1;temp1.clear();break;
                }
                  //  j--;
            }
            z.vect.clear();
             for(vector<long int>::iterator i=x.vect.begin();i!=x.vect.end();++i)
                    {
                        if(*i>=mini)
                            z.vect.push_back(*i);
                    }
            for(vector<long int>::iterator i=y.vect.begin();i!=y.vect.end();++i)
                    {
                        if(*i>=mini)
                            z.vect.push_back(*i);
                    }
            return z;
}
int main()
{
    long int q;scanf("%ld%ld",&n,&q);vector<long int>a(n);
    for(long int i=0;i<n;i++)
        scanf("%ld",&a[i]);

    seg tree[4*n];build(a,tree,0,n-1,0);
    for(long int i=0;i<q;i++)
    {  // cout<<343;
                    long int type,l,r;scanf("%ld%ld%ld",&type,&l,&r);
                    if(type==1)
                        update(a,tree,0,n-1,0,l-1,r);
                    else
                    {
                        if(r-l<2)
                            printf("0\n");
                        else
                        {
                            long int ans=query(tree,0,n-1,l-1,r-1,0).peri;
                          //  for(vector<long int>::iterator i=ans.vect.begin();i!=ans.vect.end();++i)
                            printf("%ld\n",ans);
                        }
                    }
    }
}

