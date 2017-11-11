#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<inttypes.h>
using namespace std;
vector<long int>bit(100005,0);
void updatebit(long int n,long int index,long int val)
{
    index+=1;
    while(index<=n)
    {
        bit[index]+=val;
        index+=index&(-index);
    }
}
long int getsum(long int index)
{
    index+=1;
    long int sum=0;
    while(index>0)
    {
        sum+=bit[index];
        index-=index&(-index);
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,m;
        cin>>n>>m;
        vector<long long int> a(100005,0);
        int type[m];
        long int l[m],r[m];
        long long int num;
        bool flag=1;
        //for(long int i=0;i<m;i++)
          //  num[i]=1;
        for(long int i=0;i<m;i++)
        {
            cin>>type[i]>>l[i]>>r[i];
            l[i]-=1;
            r[i]-=1;

        }
        for(long int i=m-1;i>=0;i--)
        {
            if(type[i]==2)
            {
                if(flag)
                {
                    updatebit(m,l[i],1);
                    updatebit(m,r[i]+1,-1);
                    flag=0;
                }
                else
                {
                    long int val=getsum(i);
                    val+=1;
                    val=val%1000000007;
                    updatebit(m,l[i],val);
                    updatebit(m,r[i]+1,-val);

                }
            }
            else
            {
                num=getsum(i);
                num+=1;
                a[l[i]]+=num;
                a[l[i]]=a[l[i]]%1000000007;
                a[r[i]+1]-=num;
                a[r[i]+1]=a[r[i]+1]%1000000007;
            }
        }
        a[0]=a[0]%1000000007;
        cout<<a[0]<<" ";
        for(long int i=1;i<n;i++)
            {
                a[i]+=a[i-1];
                a[i]=a[i]%1000000007;
                if(a[i]<0)
                    a[i]+=1000000007;
                cout<<a[i]<<" ";
            }

        cout<<endl;
        bit.clear();
        bit.resize(100005,0);
    }
}
