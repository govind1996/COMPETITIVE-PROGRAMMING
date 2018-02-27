#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ull;
using namespace std;
//temple
int main ()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >>t;
  while (t--)
  {
    int n;
    cin >>n;
    int a[n],m=0;
    ull sum=0;
    for (int i=0; i<n; i++)
      {cin >>a[i];
        sum+=a[i];
      }
    for (int i=0; i<n; i++)
    {
      a[i]=min (i+1,a[i]);
    }
    for (int i=n-1; i>=0; i--)
    {
      a[i]=min (a[i],n-i);
    }

    for (int i=1; i<n; i++)
    {
    a[i]=min (a[i-1]+1,a[i]);
    //a[i-1]=min (a[i-1],a[i]-1);
    }
    for (int i=n-1; i>0; i--)
    {
      //a[i]=min (a[i-1]+1,a[i]);
      a[i-1]=min (a[i]+1,a[i-1]);
    }
    for (int i=0; i<n; i++)
    {
      m=max(m,a[i]);
      //cout <<a[i]<<" ";
    }
    //cout <<endl;
    cout <<sum-m*m<<endl;     //(m*(m-1)+m)
    }
}
