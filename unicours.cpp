 #include<iostream>
 #include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=n,a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            ans=min(ans,n-a);
        }
        cout<<ans<<endl;
    }
    return 0;
}
