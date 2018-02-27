#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length()-1;
    int flag=1,ans=0;
    for(int i=len;i>=0;i--)
    {
        if(flag==1&&s[i]=='1')
        {
            ans++;
            flag=-1;
        }
        else if(flag==-1&&s[i]=='0')
        {
            ans++;
            flag=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
