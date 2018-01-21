/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q;
    cin>>n>>q;
    map<long int,vector<long int> > m;
    vector<long int> a(1000005,0);
    for(long int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]].push_back(i);
    }
    while(q--)
    {
        long int x,y,ans=0,minans=1000000000,flag=0;
        char c;
        cin>>x>>y>>c;
        if(m.count(y)>0&&x<n&&x>=0)
        {
            //y=m[y];
            if(c=='L')
            {
               for(long int i=0;i<m[y].size();i++)
               {
                   if(m[y][i]<=x)
                   {
                       ans=x-m[y][i];
                       minans=min(ans,minans);
                   }
                   else
                   {
                       ans=n-(m[y][i]-x);
                       minans=min(ans,minans);
                   }
               }
            }
            if(c=='R')
            {
                for(long int i=0;i<m[y].size();i++)
                {
                   if(m[y][i]>=x)
                   {
                       ans=m[y][i]-x;
                       minans=min(ans,minans);
                   }
                   else
                   {
                       ans=n-(x-m[y][i]);
                       minans=min(ans,minans);
                   }
               }
            }
            cout<<minans<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
