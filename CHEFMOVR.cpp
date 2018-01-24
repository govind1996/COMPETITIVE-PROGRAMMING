#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int sum=0,k,freq=0,n,d,i;
        cin>>n>>d;
        long long int arr[n];
        //insertion
            for(i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        k=sum/n;
        if(sum%n!=0){
            freq=-1;
        }
        if(k*n!=sum){
            freq=-1;
        }
        else{
            for(i=0;i<n;i++){
                if(arr[i]>k&&i+d<n){
                    arr[i+d]+=arr[i]-k;
                    freq+=arr[i]-k;
                    arr[i]=k;
                }
                if(arr[i]<k&&i+d<n){
                    freq+=k-arr[i];
                    arr[i+d]-=k-arr[i];
                    arr[i]=k;
                }
            }
            for(i=0;i<n;i++){
                if(arr[i]!=k){
                    freq=-1;
                    i=n;
                }
            }
        }
        cout<<freq<<endl;
    }
    return 0;
}
