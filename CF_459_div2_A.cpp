#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool arr[1005]={0};
    int f1=1,f2=1;
    arr[1]=1;
    for(int i=1;f1<=n&&f2<=n;i++)
    {
        int temp=f2;
        f2=f1+f2;
        f1=temp;
        if(f2<=n)
        arr[f2]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i])
            cout<<'O';
        else
            cout<<'o';
    }
    cout<<endl;
}
