#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int a,c=1,factors;
        cin>>a;
        int n=a;
      for(int i=2;i*i<=n;i++)
      {
          factors=0;
          while(a%i==0)
          {
              a=a/i;
              factors++;
          }
          c=c*(factors+1);
      }
      if(a>1)
        c=c*2;
      cout<<c<<endl;
    }
}
