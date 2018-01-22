#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int person,coins,ans;
        cin>>coins>>person;
        string s;
        cin>>s;
        long int head=0,tail=0;
        for(long int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='h')
                head++;
            else
                tail++;
        }
       // cin>>head>>tail;


            if((person-1)%2==0)
            {
                if(head%2==0)
                    ans=0;
                else
                    ans=1;
            }
        else

            {
                if(head%2==0)
                    ans=1;
                else
                    ans=0;
            }


        if(ans==0)
            cout<<"Head"<<endl;
        else
            cout<<"Tail"<<endl;
    }

}
