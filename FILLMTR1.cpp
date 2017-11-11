    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long int t;
        cin>>t;
        while(t--)

    Your Rank: 24 Your Score: 3


        {
            long int n,q,m=0;
            bool stop=1;
            cin>>n>>q;

    Your Rank: 24 Your Score: 3


            map< pair<long int,long int>, int> matrix;
            //vector<long int> arr[n];
            //vector<long int> arr1;
            //vector<bool> mark(1000005,0);
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

    Your Rank: 24 Your Score: 3


                else if(mina!=maxb)
                    {
                        matrix[make_pair(mina,maxb)]=val;

                        //cout<<arr1[m-1]<<endl;
                    }
                //cout<<matrix[mina][maxb]<<" ";
            }
            if(stop==0)
            {
                cout<<"no"<<endl;

            }
            else
            {
                for (map<pair<long int,long int>,int>::iterator it = matrix.begin();it != matrix.end();++it)
                {
                    map<pair<long int,long int>,int>::iterator it1 = it;
                    for (++it1;it1 != matrix.end()&&it->first.first==it1->first.first&&it->first.first<;++it1 )
                    {
                            long int x1,y1,x2,y2;
                            x1=it->first.first;
                            y1=it->first.second;
                            x2=it1->first.first;
                            y2=it1->first.second;
                           // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                                long int a,b,mini,maxj;
                                a=it->first.second;
                                b=it1->first.second;
                                mini=min(a,b);
                                maxj=max(a,b);
                                int c1=it->second,c2=it1->second;
                                if(matrix.count(make_pair(mini,maxj))>0)
                                {
                                    int c=c1+c2+matrix[make_pair(mini,maxj)];
                                    if(c==4||c==6)
                                    {
                                        stop=0;
                                        it1=matrix.end();
                                        it=matrix.end();
                                    }
                                }
                                else
                                {
                                    int c=c1+c2;
                                    if(c<3)
                                        matrix[make_pair(mini,maxj)]=1;
                                    else
                                        matrix[make_pair(mini,maxj)]=5-c;


    Your Rank: 24 Your Score: 3


                                }

                    }
                }
                if(stop)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
            matrix.clear();
        }
    }
