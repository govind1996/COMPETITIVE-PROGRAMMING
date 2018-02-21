#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int> m;
        m.insert(pair<char,int>('c',5));
        m.insert(pair<char,int>('e',7));
        m.insert(pair<char,int>('f',13));
        m.insert(pair<char,int>('h',17));
        long int len=s.length();
        long int ans=0;
        int cnt=0;
        for(long int i=0;i<=len-4;i++)
        {
            if(s[i]=='c'||s[i]=='h'||s[i]=='e'||s[i]=='f')
            {
                cnt+=(m[s[i]]+m[s[i+1]]+m[s[i+2]]+m[s[i+3]]);
                if(cnt==42)
                    ans++;
                cnt=0;
            }
        }
        if(ans)
        cout<<"lovely "<<ans<<endl;
        else
            cout<<"normal"<<endl;
    }
}
