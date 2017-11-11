#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int e,n,maxh=0,ch=0,energyi=0,honori;
        cin>>e>>n;
        honori=n-1;
        vector<long int>a(1000005);
        for(long int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.begin()+n);
        for(long int i=0;i<n;i++)
        {
            if(e>a[energyi])
            {
                e-=a[energyi];
                energyi++;
                ch++;
                if(ch>maxh)
                    maxh=ch;
            }
            else if(a[honori]>e&&ch>0)
            {
                e+=a[honori];
                honori--;
                ch--;
            }
            else
            {
                i=n;
            }
        }
        cout<<maxh<<endl;
    }
}
