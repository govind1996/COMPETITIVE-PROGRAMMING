#include<bits/stdc++.h>
using namespace std;
class point
{
    int x,y;
public:
    point(int x1,int y1)
    {

        x=x1;
        y=y1;
    }
    void display()
    {
        cout<<"X coordinate of point is "<<x<<endl;
        cout<<"Y coordinate of point is "<<y<<endl;
    }
};
int main()
{
    int x,y;

    cout<<"Enter X coordinate of point"<<endl;
    cin>>x;
    cout<<"Enter Y coordinate of point"<<endl;
    cin>>y;
    point s1(x,y);
    s1.display();
}

