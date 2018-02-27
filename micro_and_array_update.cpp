#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a,mini;
        cin>>n>>k;
        mini=k;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a<mini)
                mini=a;
        }
            cout<<(k-mini)<<endl;

    }
    return 0;
}
