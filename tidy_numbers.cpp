#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
   freopen("B-small-attempt2","r",stdin);
   freopen("tidy.txt","w",stdout);
    int t,j=1;
    cin>>t;
    while(t--)
    {
        int start=0,index,flag=0,len;
        char s[100];
        cin>>s;
        len=strlen(s);
        for(int i=0;i<len-1;i++)
        {
            if(flag)
            s[i]='9';
            else if(s[i+1]<s[i])
            {
                if(s[i]=='0')
                    s[i]='9';
                else
                    s[i]--;
                index=i;
                flag=1;
            }

        }
        if(flag)
            s[len-1]='9';
        for(int i=index;i>=1;i--)
        {
            if(s[i-1]>s[i])
            {
                s[i-1]--;

                    s[i]='9';
            }
        }
        if(s[0]=='0')
            start=1;
        cout<<"case #"<<j++<<": ";
        for(int i=start;s[i]!='\0';i++)
           cout<<s[i];
        cout<<endl;

    }
}
