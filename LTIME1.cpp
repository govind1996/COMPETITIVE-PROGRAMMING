#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int a=0,b=0,c=0,d=0,e=0;
       char s[20];
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(!strcmp(s,"cakewalk"))
                a++;
            else if(!strcmp(s,"simple"))
                b++;
            else if(!strcmp(s,"easy"))
                c++;
            else if(!strcmp(s,"easy-medium")||!strcmp(s,"medium"))
                d++;
            else if(!strcmp(s,"medium-hard")||!strcmp(s,"hard"))
                e++;
        }
        if(a&&b&&c&&d&&e)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

