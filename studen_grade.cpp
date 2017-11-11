#include<bits/stdc++.h>
using namespace std;
class student
{
    char grade;
    int marks;
public:
    student(char g,int m)
    {
        grade=g;
        marks=m;

    }
    void display()
    {
        cout<<"Marks of student is "<<marks<<endl;
        cout<<"Grade of student is "<<grade<<endl;
    }
};
int main()
{
    int m;
    char g;
    cout<<"Enter marks of student"<<endl;
    cin>>m;
    cout<<"Enter grade of student"<<endl;
    cin>>g;
    student s1(g,m);
    s1.display();
}
