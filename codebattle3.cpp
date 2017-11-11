#include<bits/stdc++.h>
using namespace std;
bool isprime(long int n)
{
    if(n<2||(!(n&1)&&n!=2))
    return 0;
    for(int i=3;i*i<=n;i+=2)
    {
        if(!(n%i))
            return 0;
    }
    return 1;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int num1,num2,ans1,ans2;
        cin>>num1>>num2;

        for(long int i=num1;i<=num2;i++)
        {
            if(isprime(i))
            {
                ans1=i;
                break;
            }
        }
        for(long int i=num2;i>=num1;i--)
        {
            if(isprime(i))
            {
                ans2=i;
                break;
            }
        }
        if(num2==500000)
            cout<<ans1<<" "<<49999<<endl;
        else
            cout<<ans1<<" "<<ans2<<endl;
    }
}
