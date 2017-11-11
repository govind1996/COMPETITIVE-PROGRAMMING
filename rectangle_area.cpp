#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
    rectangle(int l,int b)
    {
        cout<<"Area is "<<l*b<<endl;
    }
    rectangle(int l)
    {
        int b=5;
        cout<<"Area is "<<l*b<<endl;
    }
    rectangle()

    {
        int b=3,l=7;
        cout<<"Area is "<<l*b<<endl;
    }
};
int main()
{
    rectangle a(3,9);
    rectangle b(8);
    rectangle c;
}
