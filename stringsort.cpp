#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        while(n>1)
        {
            int small=a[n],index;
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]<=small)
                {
                    small=a[i];
                    index=i;
                }
            }
            int b=a[index];
            index++;
            int c=0;
            while(b>=0)
            {
                b-=index;
                c++;
            }
            c*=index;
            for(int i=0;i<n;i++)
                {
                    a[i]-=c;
                }
            int i,j;

            for(i=0,j=0;i<n;i++)
            {

                if(a[i]>=0)
                {
                    a[j]=a[i];
                    j++;

                }
            }
            n=j;


        }
        cout<<n<<endl;
        if(n==1)
            cout<<"Ladia"<<endl;
        else
            cout<<"Kushagra"<<endl;
    }
    return 0;
}
