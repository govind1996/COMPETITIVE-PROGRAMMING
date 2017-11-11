#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    int ans=0,k=0;
   // char s1[8];
    for(int i=0;s[i]!='\0';i++)
    {
        k=0;
        char s1[8]={'\0'};
        for(int j=i;s[j]!='\0'&&k<=6;j++)
        {
            s1[k]=s[j];
            k++;
            if(k>=3&&k<=6)
            {  // cout<<s1<<endl;
                if(!strcmp(s1,"Danil"))
                   ans++;
                if(!strcmp(s1,"Olya"))
                    ans++;
                if(!strcmp(s1,"Slava"))
                    ans++;
                if(!strcmp(s1,"Ann"))
                    ans++;
                if(!strcmp(s1,"Nikita"))
                    ans++;
            }
        }
    }
    if(ans==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
