#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,q;
        bool stop=1;
        cin>>n>>q;
        map< pair<long int,long int>, int> matrix;
       // vector<int> arr(1005,0);
        for(long int i=0;i<q;i++)
        {
            long int a,b,mina,maxb;
            int val;
            cin>>a>>b>>val;
            a=a-1;b=b-1;
            val=val+1;
            mina=min(a,b);
            maxb=max(a,b);
            if(mina==maxb&&val==2)
            {
                stop=0;

            }
          else if(matrix.count(make_pair(mina,maxb)))
            {
                if(matrix[make_pair(mina,maxb)]!=val)
                {
                    stop=0;

                }
            }
            else if(mina!=maxb)
                {
                    matrix[make_pair(mina,maxb)]=val;
                }
            //cout<<matrix[mina][maxb]<<" ";
        }
        if(stop==0)
        {
            cout<<"no"<<endl;

        }
        else
        {
            for (long int ind1=0;ind1<n;ind1++)
            {
                //long int ind1=it->first.first;
                //cout<<"check1"<<endl;
                for(long int i=ind1+1;i<n;i++)//ver
                {
//                    cout<<matrix[make_pair(ind1,i)]<<endl;
                    if(matrix.count(make_pair(ind1,i))>0)
                    {
                        for(long int j=i+1;j<n;j++)
                            {

                            if(matrix.count(make_pair(ind1,j))>0&&matrix.count(make_pair(i,j))>0)
                            {
                                int c=matrix[make_pair(ind1,i)]+matrix[make_pair(ind1,j)]+matrix[make_pair(i,j)];
                                //cout<<c<<endl;
                                if(c==4||c==6)
                                    stop=0;

                            }
                            }
                            if(matrix[make_pair(ind1,i)]==1)
                            {
                                for(long int k=0;k<n;k++)
                                {
                                    long int x1=min(ind1,k);
                                    long int y1=max(ind1,k);
                                    long int x2=min(i,k);
                                    long int y2=max(i,k);
                                    if(matrix.count(make_pair(x1,y1))>0&&matrix.count(make_pair(x1,y2))>0)
                                    {
                                        if(matrix[make_pair(x1,y1)]!=matrix[make_pair(x2,y2)])
                                            stop=0;
                                    }

                                }
                            }

                    }

                }
            }
            if(stop==1)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;

        //cout<<endl;
        }
        matrix.clear();
    }
}
