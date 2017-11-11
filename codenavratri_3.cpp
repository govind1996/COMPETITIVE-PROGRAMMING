#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int t;
   cin>>t;
   while(t--)
   {
       long int n,cnt=0,n1,cmin,cmax;
       bool flag=1;
       cin>>n;
       n1=(n-1)/2;
       cmin=1;
       cmax=n;
       vector<long int> a(1000005);
       for(long int i=0;i<n;i++)
        cin>>a[i];
       // long int val=4;
       int v;
       if(n%2==0)
        v=2;
       else
        v=1;
        long int i=1;
        while(i<=(n-1))
        {

                if(a[n1]==cmax)
                    cmax--;
                else if(a[n1]==cmin)
                    cmin++;
                else
                {
                    flag=0;
                    n1=n;
                }
            if(v==2)
            {
                v=1;
                n1+=i;
            }
            else if(v==1)
            {
                v=2;
                n1-=i;
            }
            i++;
        }
       if(flag)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }

}
