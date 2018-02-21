#include <bits/stdc++.h>
using namespace std;
/*struct pnt
{
    long int x;
    long int y;
};*/
int main()
{
    //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    long int test;
    cin>>test;
    while(test--)
    {
        long int n,sumx=0,sumy=0;
        scanf("%ld",&n);
        vector<long int> polyx(n);
        vector<long int> polyy(n);
        for(long int i=0;i<n;i++)
        {
          //  long int x2,y2;
            scanf("%ld%ld",&polyx[i],&polyy[i]);
            sumx+=polyx[i];
            sumy+=polyy[i];
          //  maxx=max(x2,maxx);
          //  minx=min(x2,minx);
          //  maxy=max(y2,maxy);
          //  miny=min(y2,miny);
          //  polyx[i]=x2;
          //  polyy[i]=y2;
           //cout<<i<<endl;
        }

        vector<long int>ansx(n/10);
        vector<long int>ansy(n/10);
        long int cnt=0;
        long int medx=sumx/n;
        long int medy=sumy/n;
        sumx=0;
        sumy=0;
        long int n1=10;
        if(n>=10&&n<=100)
        {
            for(long int i=0;i<n;i++)
            {
                //sumx+=polyx[i];
                //sumy+=polyy[i];
                cout<<(polyx[i]+polyx[n/2+i])/2<<" "<<(polyy[i]+polyy[n/2+i])/2<<endl;

                cnt++;
                if(cnt>=n/10)
                    break;

            }
        }
    else
    {
        for(long int i=0;i<n;i++)
        {
            long int x3=(polyx[i]+medx)/2;
            long int y3=(polyy[i]+medy)/2;
            if(x3!=polyx[i]||y3!=polyy[i])
            {
               // printf("%ld %ld\n",(polyx[i]+medx)/2,(polyy[i]+medy)/2);
               ansx[cnt]=x3;
               ansy[cnt]=y3;
               cnt++;

                if(cnt>=n/10)
                   break;
            }
        }
        if(cnt<n/10)
            cout<<"-1"<<endl;
        else
        {
            for(long int i=0;i<cnt;i++)
                cout<<ansx[i]<<" "<<ansy[i]<<endl;
        }
    }
        }


    return 0;
}
