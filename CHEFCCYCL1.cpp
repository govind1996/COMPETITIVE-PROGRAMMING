#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,q;
        cin>>n>>q;
        vector<long int>scycle(200005,0);
        vector<long int>sstart(100005,0);
        vector<long int>snodes(100005);
        vector<long int>bcycle(100005,0);
        vector<long int>fparent(100005);
        vector<long int>sparent(100005);
        vector<long int>cdist(100005);
        vector<long int>rdist(100005);
        long int bcyclesum=0;
        sstart[1]=1;
        for(long int i=1,k=0;i<=n;i++)
        {
            long int a;
            cin>>a;
            snodes[i]=a;
            scycle[k]=0;
            k++;
            sstart[i+1]=sstart[i]+a+1;
            //cout<<"check"<<endl;
            for(long int j=1;j<=a;j++)
            {
                long int b;
                cin>>b;
                scycle[k]=scycle[k-1]+b;
                k++;
            }
            //cout<<"check";
        }
        /*for(long int i=1;i<=n;i++)
        {
            for(long int j=sstart[i]-1;j<sstart[i+1]-1;j++)
                cout<<scycle[j]<<" ";

        }
        cout<<endl;*/
        /*for(long int i=1;i<=n;i++)
            cout<<snodes[i]<<" "<<sstart[i]<<endl;*/
        bcycle[0]=0;
        for(long int i=1;i<=n;i++)
        {
            long int a,b,c;
            cin>>a>>b>>c;
            if(i==n)
            {
                fparent[1]=b;
                sparent[i]=a;
            }
            else
            {
                sparent[i]=a;
                fparent[i+1]=b;
            }
            bcycle[i]=bcycle[i-1]+c;
        }
       /*for(long int i=1;i<=n;i++)
            cout<<fparent[i]<<" "<<sparent[i]<<endl;
        for(long int i=0;i<=n;i++)
            cout<<bcycle[i]<<" ";
        cout<<endl;*/
        cdist[0]=0,rdist[0]=0;
        for(long int i=1;i<=n;i++)
        {
            long int v,w;

            if(fparent[i]>sparent[i])
            {
                long int ind=sstart[i]-1;
                long int x=ind+fparent[i];
                long int y=ind+sparent[i];
                long int t=ind+snodes[i];
                w=scycle[x-1]-scycle[y-1];
                v=scycle[t]-w;
                //cout<<scycle[t]<<endl;
                //cout<<x<<" "<<y<<" "<<v<<" "<<w<<endl;
            }
            else if(fparent[i]<sparent[i])
            {
                long int ind=sstart[i]-1;
                long int x=ind+fparent[i];
                long int y=ind+sparent[i];
                long int t=ind+snodes[i];
                v=scycle[y-1]-scycle[x-1];
                w=scycle[t]-v;
                //cout<<scycle[t]<<endl;
                //cout<<x<<" "<<y<<" "<<v<<" "<<w<<endl;
            }
            else
                {
                    v=0;
                    w=0;
                }
            cdist[i]=cdist[i-1]+v;
            rdist[i]=rdist[i-1]+w;
        }
        /*for(long int i=0;i<=n;i++)
            cout<<cdist[i]<<" ";
        cout<<endl;
        for(long int i=0;i<=n;i++)
            cout<<rdist[i]<<" ";
        cout<<endl;*/
        /*long int temp=fparent[1];
        fparent[1]=sparent[1];
        sparent[1]=temp;*/
        for(long int i=0;i<q;i++)
        {
            long int v1,c1,v2,c2,ans1=0,ans2=0,maxv,minv,maxc,minc;
            cin>>v1>>c1>>v2>>c2;
           // maxv=max(v1,v2);
           // minv=min(v1,v2);


           // ans1=bcycle[maxc-1]-bcycle[minc-1];
          //  ans2=bcycle[n]-ans1;
            if(c2>c1)
            {
                ans1=bcycle[c2-1]-bcycle[c1-1];
                ans2=bcycle[n]-ans1;
                ans1+=cdist[c2-1]-cdist[c1];
                ans2+=rdist[n]-rdist[c2]+rdist[c1-1];
            }
            else
            {
                ans2=bcycle[c1-1]-bcycle[c2-1];
                ans1=bcycle[n]-ans2;
                ans1+=cdist[n]-cdist[c1]+cdist[c2-1];
                ans2+=rdist[c1-1]-rdist[c2];
            }
            cout<<ans1<<" "<<ans2<<endl;
                long int ind=sstart[c1]-1;
                long int x=ind+sparent[c1];
                long int z=ind+fparent[c1];
                long int y=ind+v1;
                long int t=ind+snodes[c1];
                long int v,w;
                if(x>y)
                {
                    v=scycle[x-1]-scycle[y-1];

                }
                else if(y>x)
                {
                    v=scycle[t]-scycle[y-1]+scycle[x-1];
                }
                else
                    v=0;
                if(z>y)
                    w=scycle[z-1]-scycle[y-1];
                else if(y>z)
                    w=scycle[t]-scycle[y-1]+scycle[z-1];
                else
                    w=0;
              //  long int v=scycle[x-1]-scycle[y-1];
              //  long int w=scycle[z-1]-scycle[y-1];
               // if(v<0)
                //    v+=scycle[t];
               // if(w<0)
               //     w+=scycle[t];
                ans1+=v;
                ans2+=w;
                cout<<ans1<<" "<<ans2<<endl;
                ind=sstart[c2]-1;
                x=ind+fparent[c2];
                y=ind+v2;

                z=ind+sparent[c2];
                t=ind+snodes[c2];
                cout<<fparent[c2]<<" "<<v2<<" "<<scycle[x-1]<<" "<<scycle[y-1]<<" "<<scycle[t]<<endl;
              //  v=scycle[x-1]-scycle[y-1];
              //  w=scycle[z-1]-scycle[y-1];

                 if(x>y)
                    v=scycle[t]-scycle[x-1]+scycle[y-1];
                else if(y>x)
                    v=scycle[y-1]-scycle[x-1];
                else
                    v=0;
                if(z>y)
                    w=scycle[t]-scycle[z-1]+scycle[y-1];
                else if(y>z)
                    w=scycle[y-1]-scycle[z-1];
                else
                    w=0;
               // cout<<x<<" "<<y<<endl;
               cout<<v<<" "<<ans1<<endl;
                ans1+=v;
                ans2+=w;
                if(ans1<ans2)
                cout<<ans1<<endl;
                else
                    cout<<ans2<<endl;
            }



    }
}
