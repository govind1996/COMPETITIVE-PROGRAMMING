#include <vector>
#include <string>
#include <sstream>
#include<iostream>
#include<bits/stdc++.h>
#include <stdio.h>
#include <cstdio>
#include<map>
#include<gawkapi.h>
#include<lastlog.h>
#include<sanitizer/asan_interface.h>
#include<math.h>
#include<algorithm>
#include<tr1/regex>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char c;
    getchar();
    while(t--)
    {

        //cin>>l;

    string str;
    vector<string>tokens;
    getline(cin,str);
    //cout<<str<<endl;
    string buf; // Have a buffer string
    stringstream ss(str); // Insert the string into a stream
 // Create vector to hold our words

    while (ss >> buf)
        {

            tokens.push_back(buf);
        }
        int s=tokens.size();

        for(int i=0;i<tokens.size();i+=2)
        {

            if(s==1)
                cout<<tokens[i];
            else
            cout<<tokens[i]<<" ";

        }
         for(int i=1;i<tokens.size();i+=2)
        {

            if(i==s-1||i==s-2)
                cout<<tokens[i];
            else
            cout<<tokens[i]<<" ";

        }

//    for(int i=0;i<odd.size();i++)
//        cout<<odd[i]<<" ";
//    for(int i=0;i<even.size();i++)
//        {
//
//            cout<<even[i]<<" ";
//        }
        cout<<endl;

    }
}

