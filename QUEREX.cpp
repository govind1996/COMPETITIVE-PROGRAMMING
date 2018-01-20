#include<bits/stdc++.h>
using namespace std;
struct sq
{

   long int xorarr[1000];
    map<long int,long int> m;
    long int xorval;
};
int main()
{
    int n,m;
    vector<long int> arr(100005,0);
    vector<long int> xarr(100005,0);
    cin>>n>>m;
    for(long int i=0;i<n;i++)
        cin>>arr[i];
    xarr[0]=arr[0];
    for(long int i=1;i<n;i++)
        {
            xarr[i]=xarr[i-1]^arr[i];
        //    cout<<xarr[i]<<" ";
        }
     //   cout<<endl;
    int bktsize=sqrt(n),totbkt;
    totbkt=(n/bktsize);
    if(n%bktsize!=0)
        totbkt++;
    sq obj[totbkt];
    long int j=0;
  //  cout<<"check \n";
 // cout<<totbkt<<" "<<bktsize<<endl;
    for(long int i=0,k=0;i<n;i++,k++)
    {
        obj[j].xorarr[k]=xarr[i];
        obj[j].m[xarr[i]]++;
        obj[j].xorval=0;
        if((i+1)%bktsize==0)
        {
            j++;
            k=-1;
        }
     //   cout<<i<<" "<<j<<" "<<k<<endl;
    }
   // totbkt=j;
    //totbkt++;
    j=0;
  //  cout<<"check \n";
  /* for(long int i=0,k=0;i<n;i++,k++)
    {
       // obj[i].xorarr[k]=xarr[i];
       cout<<obj[j].xorarr[k]<<" ";
        if((i+1)%bktsize==0)
        {
            j++;
            k=-1;
            cout<<endl;
        }
    }*/
    for(long int i=0;i<m;i++)
    {
        long int t,x,r;
        cin>>t>>r>>x;
        if(t==1)
        {
            r--;
            long int val=arr[r];
            arr[r]=x;
            val^=x;
            long int j=r/bktsize;
            long int k=r-j*bktsize;
            long int r1=r;
            while (r1<n && r1%bktsize!=0 && k!=0)
            {
                obj[j].m[obj[j].xorarr[k]]--;
                obj[j].xorarr[k]^=val;
                obj[j].m[obj[j].xorarr[k]]++;
                k++;
                r1++;
            }
            if(k!=0)
                j++;
           // cout<<"check11"<<endl;
           // cout<<j<<" "<<totbkt<<endl;
            //j++;
            while(j<totbkt)
            {
                obj[j].xorval^=val;
                j++;
               // cout<<"check1"<<endl;
            }
            long int jj=0;
         /*   for(long int ii=0,kk=0;ii<n;ii++,kk++)
                {
                   // obj[i].xorarr[k]=xarr[i];
                   cout<<obj[jj].xorarr[kk]<<" ";
                    if((ii+1)%bktsize==0)
                    {
                        jj++;
                        kk=-1;
                        cout<<endl;
                    }
                }*/
//cout<<"check1"<<endl;

        }

        else
        {
            //r--;
            long int j=r/bktsize,ans=0,ind=0;
            long int k=r-j*bktsize;
            long int r1=0;
            while(ind<j&&j!=0)
            {
                ans+=obj[ind].m[x^obj[ind].xorval];
                ind++;
            }
            while (r1<k)
            {
                if((obj[ind].xorarr[r1]^obj[ind].xorval)==x)
                    ans++;
                r1++;
            }
            cout<<ans<<endl;

        }
    }
}
