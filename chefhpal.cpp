#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n>>a;
        if(a==1)
        {
            cout<<n<<" ";
            for(int i=0;i<n;i++)
                cout<<"a";
            cout<<endl;
        }
        if(a==2)
        {
            if(n==1)
                cout<<"1 a";
            if(n==2)
                cout<<"1 ab";
            if(n==3)
                cout<<"2 abb";
            if(n==4)
                cout<<"2 aabb";
            if(n==5)
                cout<<"3 aaabb";
            if(n==6)
                cout<<"3 aababb";
            if(n==7)
                cout<<"3 aaababb";
            if(n==8)
                cout<<"3 aaababbb";
            if(n>8)
            {
                cout<<"4 ";

                int j=n%3;

                    if(j==1)
                        cout<<"a";
                    if(j==2)
                        cout<<"aa";
                        for(int i=1;i<=n/3;i++)
                {
                    if(i%2==0)
                        cout<<"abb";
                    else
                        cout<<"aab";
                }

                cout<<endl;
            }
        }
            if(a>2)
            {
                char c='a';
                cout<<"1 ";
                for(int i=1;i<=n;i++)
                {
                    cout<<c;
                    c=c+1;
                    if(i%a==0)
                        c='a';
                }
                cout<<endl;
            }
        }
    }

