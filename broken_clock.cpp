#include<bits/stdc++.h>
using namespace std;
long long int m=1000000007;
long int power_mod(long long int num,long long int pow,long long int mod)
{
    long long int res=1;
    num=num%mod;
    while(pow>0)
    {
        if(pow&1)
            res=(res*num)%mod;
        pow=pow>>1;
        num=(num*num)%mod;
    }
    return res;
}

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int l,d,t;
        scanf("%lld%lld%lld",&l,&d,&t);
        long long int modid=power_mod(l,m-2,m);
     //   cout<<modid<<endl;
        if(modid<0)
            modid+=m;
        modid=(d*modid)%m;
        long long int t0=1,t1=modid,tn;
        if(t==1)
            cout<<(d%m)<<endl;
        else
        {
             for(long long int i=2;i<=t;i++)
            {
            //long long int f=moduloMultiplication(t1,modid,m);

           long long int f=(t1%m*modid%m)%m;
         //  cout<<i<<" "<<f<<" "<<t0<<" "<<t1<<endl;
             tn=((2*f)%m-t0%m)%m;
     //       if(tn<0)
      //          tn+=m;
            t0=t1;
            t1=tn;
           // cout<<i<<" "<<tn<<endl;
            }

            //cout<<moduloMultiplication(l,tn,m)<<endl;
            tn=(l*tn)%m;
            if(tn<0)
                tn+=m;
            cout<<abs(tn)<<endl;
        }


    }
}
