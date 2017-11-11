#include<bits/stdc++.h>
using namespace std;
vector<long int>bit(10000,0);
void updatebit(int n,int index,int val)
{
    index+=1;
    while(index<=n)
    {
        bit[index]+=val;
        index+=index&(-index);
    }
}
long int getsum(int index)
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
        int n,q,l,r,t,f;
        vector<long int> arr(10000);
        cin>>n>>q;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            updatebit(n,i,arr[i]);
        }
        for(int i=0;i<q;i++)
        {
            cin>>t>>l>>r>>f;
            if(t==1)
            {
                updatebit(n,l,f);
                updatebit(n,r+1,-f);
            }
            else if(t==2)
            {
                cout<<getsum(l)<<endl;
            }
        }
    }
}
