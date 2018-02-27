#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1>x2)
    {
        //y2++;
        int y=abs(x1-x2);
        int x=abs(y1-y2);
        if(y%2!=0)
            cout<<"Impossible";
        else if((y/2)%2==0&&x%2!=0)
            cout<<"Impossible";
        else if((y/2)%2!=0&&x%2==0)
            cout<<"Impossible";
        else
        {
            if(y1>y2)
            {
                int ans=0,ul=0;
                while(x&&y)
                {
                    //cout<<"UL ";
                    ul++;
                    ans++;
                    x-=1;
                    y-=2;
                    y1--;
                }
                int l=0;
                while(x)
                {
                    //cout<<"LL ";
                    ans++;
                    x-=2;
                    l++;
                }
                ans+=y/2;
                cout<<ans<<endl;
                while(ul--)
                    cout<<"UL ";
                int c=0,f=y/2;
                while(y)
                {
                    if(y1>0&&c!=f)
                        {
                            cout<<"UL ";
                            y1--;
                            c++;
                            y-=2;
                        }
                    else
                    {
                        cout<<"UR ";
                        y1++;
                        y-=2;
                    }
                }
                while(l)
                {
                    cout<<"L ";
                    l--;
                }
            }
            else if(y2>y1)
            {
                int ur=0,ans=0;
                while(x&&y)
                {
                    ur++;
                    y-=2;
                    x-=1;
                    ans++;
                    y1++;
                }
                int r=0;
                while(x)
                {
                    ans++;
                    r++;
                    x-=2;
                }
                ans+=y/2;
                cout<<ans<<endl;
                int c=0,f=y/2;
                while(y)
                {
                    if(y1>0&&c!=f)
                    {
                        cout<<"UL ";
                        y1--;
                        c++;
                        y-=2;
                    }
                    else
                    {
                        cout<<"UR ";
                        y1++;
                        y-=2;
                    }
                }
                while(ur--)
                    cout<<"UR ";
                while(r--)
                    cout<<"R ";
            }
            else if(y2==y1)
            {
                cout<<y/2<<endl;
                int c=0,f=y/2;
                while(y)
                {
                    if(y2>0&&c!=f)
                    {
                        cout<<"UL ";
                        y2--;
                        c+=2;
                        y-=2;
                    }
                    else
                    {
                        cout<<"UR ";
                        y2++;
                        y-=2;
                    }
                }
            }
        }
    }
    else if(x1<x2)
    {

        int y=abs(x1-x2);
        int x=abs(y1-y2);
        if(y%2!=0)
            cout<<"Impossible";
        else if((y/2)%2==0&&x%2!=0)
            cout<<"Impossible";
        else if((y/2)%2!=0&&x%2==0)
            cout<<"Impossible";
        else
        {
            if(y1>y2)
            {
                int ll=0,ans=0;
                while(x&&y)
                {
                    //cout<<"UL ";
                    ans++;
                    ll++;
                    x-=1;
                    y-=2;
                    y1--;
                }
                int l=0;
                while(x)
                {
                    //cout<<"LL ";
                    ans++;
                    x-=2;
                    l++;
                }
                ans+=y/2;
                cout<<ans<<endl;
                int c=0,f=y/2;
                while(y)
                {
                    if(y1<(n-1)&&c!=f)
                        {
                            cout<<"LR ";
                            y1++;
                            c+=2;
                            y-=2;
                        }
                    else
                    {
                        cout<<"LL ";
                        y1--;
                        y-=2;
                    }
                }
                while(ll--)
                    cout<<"LL ";
                while(l)
                {
                    cout<<"L ";
                    l--;
                }
            }
            else if(y2>y1)
            {
               // int ur=0;
               int lr=0,ans=0;
                while(x&&y)
                {
                  //  cout<<"LR ";
                    lr++;
                    ans++;
                    y-=2;
                    x-=1;
                    y1++;
                }
                int r=0;
                while(x)
                {
                    r++;
                    ans++;
                    x-=2;
                }
                int c=0,f=y/2;
                ans+=y/2;
                cout<<ans<<endl;
                while(r--)
                    cout<<"R ";
                while(lr--)
                    cout<<"LR ";
                while(y)
                {
                    if(y1<(n-1)&&c!=f)
                    {
                        cout<<"LR ";
                        y1++;
                        c+=2;
                        y-=2;
                    }
                    else
                    {
                        cout<<"LL ";
                        y1--;
                        y-=2;
                    }
                }

            }
            else if(y2==y1)
            {
                int c=0,f=y/2;
                cout<<y/2<<endl;
                while(y)
                {
                    if(y2<(n-1)&&c!=f)
                    {
                        cout<<"LR ";
                        y2++;
                        c+=2;
                        y-=2;
                    }
                    else
                    {
                        cout<<"LL ";
                        y2--;
                        y-=2;
                    }
                }
            }
        }
    }
    else
    {

        int y=abs(x1-x2);
        int x=abs(y1-y2);
        if(x%2!=0)
            cout<<"Impossible";
        else
        {
           // cout<<y/2<<endl;
            cout<<x/2<<endl;
            if(y1>y2)
            {
                while(x)
                {
                    cout<<"L ";
                    x-=2;
                }
            }
            else if(y1<y2)
            {
                while(x)
                {
                    cout<<"R ";
                    x-=2;
                }
            }
        }
    }
    cout<<endl;
}
