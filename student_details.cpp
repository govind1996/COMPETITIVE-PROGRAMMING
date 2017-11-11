#include<bits/stdc++.h>
using namespace std;

class student
{
    string name;
    int roll;
    string adr;
public:
    student(string sname,int sroll,string sadr)
    {
        name=sname;
        roll=sroll;
        adr=sadr;

    }
    ~student()
    {
        cout<<"Student's name is "<<name<<endl;
        cout<<"student's roll is "<<roll<<endl;
        cout<<"student's address is "<<adr<<endl;
    }
};
int main()
{

    string name,adr;
    int roll;
    cout<<"Enter student's name \n";
    getline(cin,name);
    cout<<"Enter student's address \n";
    getline(cin,adr);
    cout<<"Enter student's roll \n";
    cin>>roll;
    student s1(name,roll,adr);

}
