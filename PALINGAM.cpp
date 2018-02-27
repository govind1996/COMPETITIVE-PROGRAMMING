#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        int a[26]={0},b[26]={0},uniques2=1,allequal=1,uniques=0,uniquet=0;
        cin>>s>>t;
        for(int i=0;s[i]!='\0';i++)
        {
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(allequal)
            {
                if(a[i]!=b[i])
                    allequal=0;
            }
            if(b[i]==0&&a[i]>1&&uniques2!=2)
                uniques2=2;
            if(b[i]==0&&a[i])
                uniques=1;
            if(a[i]==0&&b[i]>0&&!uniquet)
                uniquet=1;
        }
        if(allequal)
            cout<<"B"<<endl;
        else if(uniques2==2)
            cout<<"A"<<endl;
        else if(uniques&&uniquet==0)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
}
