#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    long int ans=LONG_MAX;
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])<ans)
            ans=abs(a[i]-a[i+1]);
    }
    cout<<ans;
}
