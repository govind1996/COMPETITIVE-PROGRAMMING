#include <stdio.h>
using namespace std;
bool ison(long int x,long int y)
{
    if((x&y))
        return 1;
    else
        return 0;
}
int main()
{
	long int n,q,i,j;
	scanf("%ld%ld",&n,&q);
	long int v[n];
	for (long int i = 0; i < n; ++i)
		scanf("%ld",&v[i]);
	long int arr[n+2][32];
	for(i=0;i<32;i++)
        arr[0][i]=0;
	for(i=0;i<31;i++)
    {
        long int temp=1<<i;
        for(j=1;j<=n;j++)
            arr[j][i]=arr[j-1][i]+ison(v[j-1],temp);
    }
      for(i=0;i<q;i++)
      {
          long int ans=0;
          long int l,r;
          scanf("%ld%ld",&l,&r);
          long int diff=(r-l+1)/2;
          if((r-l+1)%2==0)
            diff-=1;
          long int mul=1;
          for(j=0;j<31;j++)
          {
             // cout<<arr[r][j]-arr[l-1][j]<<endl;
              if(arr[r][j]-arr[l-1][j]<=diff)
                    ans+=mul;
              mul*=2;
          }
          printf("%ld\n",ans);
      }

	return 0;
}
