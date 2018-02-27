#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        char name[12],c,ch1,ch2;
        int c1=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]==' ')
                c1++;
        }
        if(c1==0)
        {
           c=toupper(s[0]);
           name[0]=c;
           int i;
           for(i=1;s[i]!='\0';i++)
            {
                c=tolower(s[i]);
                name[i]=c;
            }
            name[i]='\0';
            cout<<name<<endl;
        }
        else if(c1==1)
        {
            ch1=toupper(s[0]);
            int j=0;
            int flag=0;
            for(int i=1;s[i]!='\0';i++)
            {
                if(s[i]==' ')
                {

                    flag=1;
                    i++;
                    name[j]=toupper(s[i]);
                    j++;
                }
               else if(flag)
                {
                    c=tolower(s[i]);
                    name[j]=c;
                    j++;
                }
            }

            name[j]='\0';
            cout<<ch1<<". "<<name<<endl;

        }
        else
        {
            ch1=toupper(s[0]);
            int j=0;
            int flag=0;
            for(int i=1;s[i]!='\0';i++)
            {
                if(s[i]==' '&&flag==0)
                {
                    i++;
                    ch2=toupper(s[i]);
                    flag=1;
                }
               else if(flag==1&&s[i]==' ')
                {
                    flag=2;
                    i++;
                    name[j]=toupper(s[i]);
                    j++;
                }
                else if(flag==2)
                {
                    c=tolower(s[i]);
                    name[j]=c;
                    j++;

                }
            }

            name[j]='\0';
            cout<<ch1<<". "<<ch2<<". "<<name<<endl;

        }



    }
}
