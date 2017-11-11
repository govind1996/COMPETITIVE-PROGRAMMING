#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,ans;
    cin>>a>>b>>c;
    if(n==1)
        cout<<"0"<<endl;
    else
    {
        int min1=min(a,b);
        int min2=min(min1,c);
        ans=min1+(n-2)*min2;
        cout<<ans<<endl;
    }

}

