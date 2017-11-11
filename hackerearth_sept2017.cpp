#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <long int> arr(10000);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                while(arr[i]%2==0)
                {
                    ans++;
                    arr[i]=arr[i]/2;
                }
            }
        }
        cout<<ans<<endl;
        if(ans%2!=0)
        cout<<"Charlie"<<endl;
        else
        cout<<"Alan"<<endl;
    }
    return 0;
}
