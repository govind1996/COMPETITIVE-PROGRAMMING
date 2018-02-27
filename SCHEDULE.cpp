#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=1,j=0,maxi=0,sindex=0,eindex=0,i;
        cin>>n>>k;
        char s[n];
        int a[n];
        cin>>s;
       while(k--)
        {
            for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                cnt++;
            else
            {
                //cout<<cnt<<endl;
                if(cnt>maxi)
                {
                    maxi=cnt;
                    sindex=i-cnt;
                    eindex=i-1;
                }
                cnt=1;
            }
        }
       // cout<<cnt<<endl;
        if(cnt>maxi)
                {
                    maxi=cnt;
                    sindex=i-cnt;
                    eindex=i-1;
                    cnt=1;
                }

        if(maxi>1)
        {
             if(s[sindex]=='0')
            s[(eindex+sindex)/2]='1';
            else
            s[(eindex+sindex)/2]='0';

            eindex=-1;
            sindex=-1;
        }
        maxi=0;
        }
        cnt=1;
            for(i=1;i<n;i++)
        {
           //cout<<s[i]<<" ";
            if(s[i]==s[i-1])
                cnt++;
            else
            {
                if(cnt>maxi)
                {
                    maxi=cnt;
                }
                cnt=1;
            }
        }
        if (cnt>maxi)
            maxi=cnt;

       // a[j]=cnt;
       // j++;
       // sort(a,a+j);
       // if(flag&&j>k)
      //  cout<<max(a[j-k]/2,a[j-k-1])<<endl;
       // else if(flag)
       //     cout<<a[j-k]/2<<endl;
       // else
            cout<<maxi<<endl;

    }
}
