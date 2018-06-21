#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m;
    cin>>n>>m;
    long int s=0;
    bool arr[101]={0};
    long int ans[100];
    for(long int i=0;i<n;i++)
    {
        long int num;
        cin>>num;
        if(!arr[num])
        {
            ans[s]=i+1;
            s++;
            arr[num]=1;
        }
    }
    if(s<m)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(long int i=0;i<m;i++)
            cout<<ans[i]<<" ";
    }
}
