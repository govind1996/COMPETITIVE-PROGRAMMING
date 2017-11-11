#include<bits/stdc++.h>
using namespace std;
vector<long long int>x(300005);
vector<long long int>a(300005);
vector<long long int>st(700005);
map<long long int,long long int> y;
long int rmq(long int ss,long int se,long int qs,long int qe,long int index)
{
     if (qs <= ss && qe >= se)
        return st[index];
     if (se < qs || ss > qe)
        return INT_MIN;
    long int mid=ss+(se-ss)/2;
    return max(rmq(ss,mid,qs,qe,2*index+1),rmq(mid+1,se,qs,qe,2*index+2));

}
long long int constructtree(long int ss,long int se,long int si)
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
long int get(long int low,long int high, long long int val)
{
    if(val<=x[low])
        return low;
    else if(val>x[high])
        return high;
    long int mid=(low+high)/2;
    if(x[mid]==val)
        return val;
    else if(x[mid]<val)
    {
        if(mid+1<=high&&val<x[mid+1])
            return mid;
        else
            get(mid+1,high,val);
    }
    else
    {
        if(mid-1>=low&&val>x[mid-1])
            return mid;
        else
            get(low,mid-1,val);
    }
}
int main()
{
    long int n,q;
    cin>>n>>q;
    for(long int i=0;i<n;i++)
    {
        long int a,b;
        cin>>a>>b;
        a+=1000000000;
        b+=1000000000;
        x[i]=a;
        y.insert(make_pair(a,b));
    }
    sort(x.begin(),x.begin()+n);
    for(long int i=0;i<n;i++)
        a[i]=y[x[i]];
    constructtree(0,n-1,0);
   // st.resize(2*n-1);
  /*  for(long int i=0;i<n;i++)
        cout<<a[i]<<" "; */
    for(long int i=0;i<q;i++)
    {
        long int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1+=1000000000;
        y1+=1000000000;
        x2+=1000000000;
        y2+=1000000000;
        if(x1==x2&&y2==y1)
            cout<<"0"<<endl;
        else{
        long int l,r,ml,mr,my1,my2;
        l=get(0,n-1,x1);
        r=get(0,n-1,x2);
     //   cout<<l<<" "<<r<<endl;
        ml=min(l,r);
        mr=max(l,r);
        my1=(min(y1,y2));
        my2=(max(y1,y2));
        long long int rm=rmq(0,n-1,ml,mr,0),ans=0;
      //  cout<<rm<<"rm "<<endl;
        if(rm>=my2)
            {
                ans+=2*rm-my1-my2+2;
              //  cout<<ans<<endl;
            }
        else
            ans+=my2-my1;
        ans+=abs(x2-x1);
        cout<<ans<<endl;
        }

    }
}
