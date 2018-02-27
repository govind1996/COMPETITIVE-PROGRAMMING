#include<iostream>
using namespace std;
int main()
{
    int n,full,halffull,emty,total;
    int cnt[2]={0};
    cin>>n;
    bool a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;

    }
    full=cnt[1]/2;
    halffull=cnt[1]%2;
    emty=cnt[0]+full;
    if(emty>0)
    total=halffull+full+1;
    else
        total=halffull+full;
    if(total%2==0)
                total=total/2;
    else
        total=total/2+1;
        cout<<total<<endl;

}
