#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
       long long int x1,x2,y1,y2,a1,a2,b1,b2,temp;
        cin>>x1>>y1>>x2>>y2;
        cin>>a1>>b1>>a2>>b2;
        if (x1>x2){
        temp=x1;x1=x2;x2=temp;
            }
        else if (y1>y2){
        temp=y1;y1=y2;y2=temp;
        }
        if (a1>a2){
        temp=a1;a1=a2;a2=temp;
        }
        else if (b1>b2){
        temp=b1;b1=b2;b2=temp;
        }
        if(y1==y2)
        {
            if((b1==b2)&&(b1==y1))
            {
                if(a1>=x1&&a1<=x2)
                    cout<<"yes"<<endl;
                else if(x1>=a1&&x1<=a2)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
            else if(a1==a2)
            {
                if(a1==x1&&b1==y1)
                    cout<<"yes"<<endl;
                else if(a1==x2&&b1==y2)
                    cout<<"yes"<<endl;
                else if(a2==x1&&b2==y1)
                    cout<<"yes"<<endl;
                else if(a2==x2&&b2==y2)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
            else
                cout<<"no"<<endl;

        }
      else  if(x1==x2)
        {
            if((a1==a2)&&(a1==x1))
            {
                if(b1>=y1&&b1<=y2)
                    cout<<"yes"<<endl;
                else if(y1>=b1&&y1<=b2)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
            else if(b1==b2)
            {
                if(a1==x1&&b1==y1)
                    cout<<"yes"<<endl;
                else if(a1==x2&&b1==y2)
                    cout<<"yes"<<endl;
                else if(a2==x1&&b2==y1)
                    cout<<"yes"<<endl;
                else if(a2==x2&&b2==y2)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
            else
                cout<<"no"<<endl;

        }
        else
            cout<<"no"<<endl;

    }
    return 0;
}
