#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,m,x,k;
        cin>>n>>m>>x>>k;
        string s;
        cin>>s;
        long int even=0,odd=0;
        for(long int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='O')
                odd++;
            else
                even++;
        }
        long int evenm=m/2;
        long int oddm=m-evenm;
        //odd=min(odd,oddm);
        //even=min(even,evenm);
        long int max_pat=0;
        max_pat+=(min(oddm*x,odd));
        max_pat+=(min(evenm*x,even));
        if(max_pat>=n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
