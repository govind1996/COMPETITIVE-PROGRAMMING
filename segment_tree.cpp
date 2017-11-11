#include<bits/stdc++.h>
using namespace std;
vector<long int>a(100005);
vector<long int>st(100005);
long int rmq(long int ss,long int se,long int qs,long int qe,long int index)
{
     if (qs <= ss && qe >= se)
        return st[index];
     if (se < qs || ss > qe)
        return INT_MIN;
    long int mid=ss+(se-ss)/2;
    return max(rmq(ss,mid,qs,qe,2*index+1),rmq(mid+1,se,qs,qe,2*index+2));

}
long int constructtree(long int ss,long int se,long int si)
{
    if(ss==se)
    {
        st[si]=a[ss];
        return a[ss];
    }
    long int mid=ss+(se-ss)/2;
    st[si]=max(constructtree(ss,mid,si*2+1),constructtree(mid+1,se,si*2+2));
    return st[si];
}
int main()
{
    long int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>a[i];
   long int y= constructtree(0,n-1,0);

   st.resize(2*n-1);
 //  for(long int i=0;i<2*n-1;i++)
  //  cout<<st[i]<<" ";
    for(long int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<rmq(0,n-1,a,b,0)<<endl;
    }

}
