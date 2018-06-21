#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            bool num;
            cin>>num;
            if(num)
            {
                ans+=abs(3-i)+abs(3-j);
            }
        }
    }
    cout<<ans<<endl;
}

