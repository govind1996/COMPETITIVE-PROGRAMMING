#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n,q;
        cin>>n>>q;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

        while(q--)
        {

            int type;
                cin>>type;

            if(type==1)
            {
                int index,k;
                cin>>index>>k;
                int finalindex=index;
                int currelement=arr[index];
                for(int i=index+1;i<=n&&k;i++)
                {
                    if(arr[i]>currelement&&(i-finalindex<=100))
                    {
                        finalindex=i;
                        k--;
                        currelement=arr[i];

                    }
                }
                cout<<finalindex<<endl;
            }
            else if(type==2)
            {
                int l,r,x;
                cin>>l>>r>>x;
                for(int i=l;i<=r;i++)
                    arr[i]+=x;
            }
        }
    }

