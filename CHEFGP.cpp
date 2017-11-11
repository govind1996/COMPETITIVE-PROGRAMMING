#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long int x,y,a=0,b=0,flaga=0,flagb=0,i,xa,xb;
        cin>>x>>y;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='a')
                a++;
            else
                b++;
        }
        xa=a;
        xb=b;
        char ans[200000];

        for(i=0;a!=b&&(a>0||b>0);)
        {
            //cout<<"check"<<endl;
            if(a>b)
            {
                if(flaga==x)
                {
                    flaga=0;
                    if(b>0)
                    {
                        ans[i]='b';
                        i++;
                        b--;
                    }
                    else
                    {
                        ans[i]='*';
                        i++;
                        ans[i]='a';
                        i++;
                        a--;
                        flaga++;

                    }
                }
                else{
                ans[i]='a';
                a--;
                flaga++;
                i++;
                }

            }
            else if(b>a)
            {
                if(flagb==y)
                {
                    flagb=0;
                    if(a>0)
                    {
                        ans[i]='a';
                        i++;
                        a--;
                    }
                    else
                    {
                        ans[i]='*';
                        i++;
                        ans[i]='b';
                        i++;
                        b--;
                        flagb++;

                    }
                }
                else{
                ans[i]='b';
                b--;
                flagb++;
                i++;
                }

            }
        }
        for(;a>0&&b>0;i++)
        {

            if(xa>xb)
            {
                ans[i]='b';
                i++;
                ans[i]='a';
                b--;
                a--;
            }
            else
            {
                ans[i]='a';
                i++;
                ans[i]='b';
                b--;
                a--;
            }

        }
        ans[i]='\0';
        for(i=0;ans[i]!='\0';i++)
            cout<<ans[i];
        cout<<endl;
    }
}
