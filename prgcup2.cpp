#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    m["scissors"]=1;
    m["paper"]=2;
    m["rock"]=3;
    m["moon"]=4;
    m["sun"]=5;
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int a=m[s1];
        int b=m[s2];
        if(a==b)
            cout<<"drew"<<endl;
        else if(a==1)
        {
            if(b==2||b==4)
            cout<<"akira"<<endl;
            else
            cout<<"hideki"<<endl;
        }
        else if(b==1)
        {
            if(a==2||a==4)
            cout<<"hideki"<<endl;
            else
            cout<<"akira"<<endl;

        }
        else if(a==2)
        {
            if(b==3||b==5)
            cout<<"akira"<<endl;
            else
            cout<<"hideki"<<endl;
        }
        else if(b==2)
        {
            if(a==3||a==5)
            cout<<"hideki"<<endl;
            else
            cout<<"akira"<<endl;
        }
        else if(a==3)
        {
            if(b==4||b==1)
            cout<<"akira"<<endl;
            else
            cout<<"hideki"<<endl;
        }
        else if(b==3)
        {
            if(a==4||a==1)
            cout<<"hideki"<<endl;
            else
            cout<<"akira"<<endl;
        }
        else if(a==4)
        {
            if(b==5||b==2)
            cout<<"akira"<<endl;
            else
            cout<<"hideki"<<endl;
        }
         else if(b==4)
        {
            if(a==5||a==2)
            cout<<"hideki"<<endl;
            else
            cout<<"akira"<<endl;
        }


    }
}
