#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,q,m=0;
        bool stop=1;
        cin>>n>>q;
        map< pair<long int,long int>, int> matrix;
        vector<long int> arr[n];
        vector<long int> arr1;
        vector<bool> mark(1000005,0);
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
                    arr[mina].push_back(maxb);
                    if(!mark[mina])
                    {
                        arr1.push_back(mina);
                        mark[mina]=1;
                    }
                    m++;
                    //cout<<arr1[m-1]<<endl;
                }
            //cout<<matrix[mina][maxb]<<" ";
        }

       /* for(int i=0;i<s1;i++)
            cout<<arr1[i]<<endl;*/
        if(stop==0)
        {
            cout<<"no"<<endl;

        }
        else if(q==0)
            cout<<"yes"<<endl;
        else
        {
            long int s1=arr1.size();
            sort(arr1.begin(),arr1.begin()+s1);
            //for(int i=0;i<s1;i++)
            //cout<<arr1[i]<<endl;
            long int k=0;
            for (;k<s1;k++)
            {   long int ind1=arr1[k];
                //long int ind1=it->first.first;
                //cout<<"check1"<<endl;
                for(long int i=0;i<arr[ind1].size();i++)//ver
                {
//                    cout<<matrix[make_pair(ind1,i)]<<endl;


                        for(long int j=i+1;j<arr[ind1].size();j++)
                            {
                                    long int mini,maxj,y1,y2;
                                    y1=arr[ind1][i];
                                    y2=arr[ind1][j];
                                    mini=min(y1,y2);
                                    maxj=max(y1,y2);
                                if(matrix.count(make_pair(mini,maxj))>0)
                                {
                                    int c=matrix[make_pair(ind1,y1)]+matrix[make_pair(mini,maxj)]+matrix[make_pair(ind1,y2)];
                                    //cout<<c<<endl;
                                    if(c==4||c==6)
                                        {
                                            stop=0;
                                            j=n;
                                            i=n;
                                            k=s1;
                                        }

                                }
                                else
                                {
                                    int c=matrix[make_pair(ind1,y1)]+matrix[make_pair(ind1,y2)];
                                    if(c<3)
                                        matrix[make_pair(mini,maxj)]=1;
                                    else
                                        matrix[make_pair(mini,maxj)]=5-c;
                                    arr[mini].push_back(maxj);

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
