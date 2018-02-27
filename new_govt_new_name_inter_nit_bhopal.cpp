#include<iostream>
#include<algorithm>
#include<array>
#include<string.h>
using namespace std;
int main()
{

    int n,q;
    cin>>n>>q;
    char s[n],t[n];
    char ch;
    cin>>s;
    while(q--)
    {
        int a,b;
        char c;
        cin>>a>>b;
        if(a==1)
        {
            cin>>c;
            s[b-1]=c;
            char *t=NULL;
            t=s;
            //strcpy(t,s,n);
            sort(t,t+n);
        }
        else if(a==2)
            cout<<t[b-1]<<endl;
            d=a;
    }
}
