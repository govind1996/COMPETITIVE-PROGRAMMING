#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
    }
     for(int i=0;i<n-1;i=i+4)
   {

       for(int j=i+2;j<n-1;j=j+2)
       {

               cout<<a[i]<<" "<<a[j+1]<<" "<<a[i+1];

       }
       cout<<endl;

   }
}
