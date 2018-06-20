#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    vector<long int> arr(n);
    for(long int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(n%2!=0)
    cout<<arr[n/2]<<endl;
    else
        cout<<arr[n/2-1]<<endl;
}
