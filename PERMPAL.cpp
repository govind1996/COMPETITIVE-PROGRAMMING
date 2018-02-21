#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        string s;
        vector<long int>v[26];
        cin>>s;
        long int cnt[26]={0},si[26]={0},ei[26]={0};
        for(long int i=0;s[i]!='\0';i++)
            {
                cnt[s[i]-'a']++;
                v[s[i]-'a'].push_back(i+1);
            }
        vector<long int> ans(100005);
        long int cntodd=0,oddpos=-1;
        for(int i=0;i<26;i++)
        {
            if(cnt[i]%2!=0)
                {
                    cntodd++;
                    oddpos=i;
                }
        }
        if(cntodd>1)
            cout<<"-1"<<endl;
        else
        {
            //si[0]=0;
            long int len=s.length();
            long int k=0;
            for(int i=0;i<26;i++)
            {
                if(cnt[i]>1&&cnt[i]%2==0)
                {
                    for(long int j=0;j<cnt[i];j+=2)
                    {
                        ans[k]=v[i][j];
                        ans[len-k-1]=v[i][j+1];
                        k++;
                    }
                }
            }
            if(cntodd)
            {long int pp=cnt[oddpos];
                for(long int i=0;i<pp;i+=2)
                {
                    ans[k]=v[oddpos][i];
                    cnt[oddpos]--;
                  // cout<<v[oddpos][i]<<" "<<cnt[oddpos]<<endl;
                    if(cnt[oddpos]>0)
                    {
                        ans[len-k-1]=v[oddpos][i+1];
                        cnt[oddpos]--;
                    }
                    k++;
                }
            }
            for(long int i=0;i<len;i++)
                cout<<ans[i]<<" ";
            cout<<endl;

        }
    }
}
