#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[10000];
        cin>>s;
        long int a=1;
        while(s[a]==s[0]&&s[a]!='\0')
            a++;
       long int cnt=1,max1=0,max2=0,len=strlen(s);
        char c=s[a];
        for(long int i=a+1,j=1;j<=len,s[i]!='\0';i++,j++)
        {
            if(s[i]==c)
                cnt++;
            else
            {
                max1=max(max1,cnt);
                max2=min(max1,cnt);
                cnt=1;
            }
            c=s[i];

        }
        cout<<max(max1/2,max2)<<endl;

    }

}
