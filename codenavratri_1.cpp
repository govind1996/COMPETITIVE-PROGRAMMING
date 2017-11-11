#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char c;
    //cin>>c;
    while(t--)
    {
        string s;
        cin>>s;

        int cnt[2]={0};
        for(int i=0;s[i]!='\0';i++)
        {
           cnt[s[i]-'0']++;
        }
       // cout<<cnt[0]<<" "<<cnt[1]<<endl;
        if((cnt[0]>=0&&cnt[1]==1)||(cnt[0]==1&&cnt[1]>=0))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
