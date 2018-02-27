#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    int n,l=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    set<int> s;
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
                {
                    int sum=a[i]+a[j]+a[k];
                    s.insert(sum);
                }
        }
    }
    cout<<s.size()<<endl;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
}

