#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<n;i++)
    {
        string name,ip;
        cin>>name>>ip;
       // cout<<name<<" "<<ip<<endl;
       mp[ip]=name;
    }
    for(int i=0;i<m;i++)
    {
        char cmnd[20],ip[25];
        cin>>cmnd>>ip;
        char ip1[25];
        int len=strlen(ip);
        int j;
        for( j=0;j<len-1;j++)
            {
                ip1[j]=ip[j];
               // cout<<ip1[j]<<" "<<ip[j]<<endl;
            }
        ip1[j]='\0';
        //cout<<ip1<<endl;
        //cout<<mp[ip1]<<endl;
        cout<<cmnd<<" "<<ip<<" "<<"#"<<mp[ip1]<<endl;
    }
}

