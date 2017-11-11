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
        long int ans=0,freq=1,flag=1;
        char c=s[0];
        long int i;
        for( i=1;s[i]!='\0';i++)
        {
            if(s[i]==s[i-1])
            {
                freq++;
            }
            else if(flag==1)
            {
                flag++;
                c=s[i-1];
                ans+=(freq*(freq+1))/2-freq;
                freq=1;
            }
            else if(flag==2)
            {
                flag=2;
                if(c==s[i])
                    ans++;
                ans+=(freq*(freq+1))/2-freq;
                freq=1;
                c=s[i-1];
            }
        }
        if(freq!=1)
            ans+=(freq*(freq+1))/2-freq;

        cout<<ans<<endl;
    }
}
