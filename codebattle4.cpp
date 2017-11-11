#include<iostream>
#include<string.h>
using namespace std;


int main()
{


        string str;
        cin>>str;
        long int n = str.length();
        long int cur_len = 1;
        long int max_len = 1;
        long int prev_index;
        long int i;
        int visited[256]={-1};
        visited[str[0]] = 0;
        for (i = 1; i < n; i++)
        {
        prev_index =  visited[str[i]];

        if (prev_index == -1 || i - cur_len > prev_index)
            cur_len++;

        else
        {

            if (cur_len > max_len)
                max_len = cur_len;

            cur_len = i - prev_index;
        }

        visited[str[i]] = i;
        }
        if (cur_len > max_len)
        max_len = cur_len;
        cout<<max_len<<endl;
    }



