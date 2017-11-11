#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[102];
    cin>>s;
    int len=strlen(s);
        bool flag=0;
        int cnt=0;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                if(cnt>=6)
                {
                    flag=1;
                    i=-1;
                }
            }
            else
                cnt++;
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
}
