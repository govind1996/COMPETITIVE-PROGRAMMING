#include<bits/stdc++.h>
using namespace std;
class prime
{
    int n;
public:
    prime(int no)
    {
        n=no;
        int flag=1;
        if(no%2==0&&no>2)
            cout<<"Not prime"<<endl;
        else if(no<2)
            cout<<"Not prime"<<endl;
        else
        {
            for(int i=3;i*i<=no;i+=2)
            {
                if(no%i==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                cout<<n<<" is prime"<<endl;
            else
                cout<<"not prime"<<endl;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter number to check"<<endl;
    cin>>n;
    prime a(n);
}
