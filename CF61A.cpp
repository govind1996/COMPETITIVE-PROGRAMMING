#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        bool n1=s1[i]-'0';
        bool n2=s2[i]-'0';
        cout<<(n1^n2);
    }
    cout<<endl;
}


