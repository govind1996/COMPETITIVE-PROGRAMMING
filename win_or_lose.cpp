#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long int w[2]={0},p=1;
        char c=s[0];
        w[c-'0']+=5;
        for(long int i=1;s[i]!='\0';i++)
        {
            if(s[i]==c)
            {
                p++;
            }
            else
            {
                if(p>=5)
                {
                    w[c-'0']+=10;
                    w[s[i]-'0']-=5;
                }
                c=s[i];
                p=1;
            }
             w[s[i]-'0']+=5;
        }
        if(p>=5)
        {
            if(c=='1')
            {
                w[1]+=10;
                w[0]-=5;
            }
            else
            {
                w[0]+=10;
                w[1]-=5;
            }
        }
        if(w[0]>w[1])
            cout<<"Manu"<<endl;
        else if(w[1]>w[0])
            cout<<"Tanu"<<endl;
        else
            cout<<"Draw"<<endl;
    }
}
