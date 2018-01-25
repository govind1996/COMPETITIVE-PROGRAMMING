#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,totalcandidates=0,companyhired;
        //vector< vector<int> >mat(1005,vector<int>(1005));
        cin>>n>>m;
        bool markcompany[m];
        companyhired=m;
        long int minsalary[n],offeredsalary[m],maxjoboffers[m];
        long long int totalsalary=0;
        for(int i=0;i<n;i++)
            cin>>minsalary[i];
        for(int i=0;i<m;i++)
        {
            cin>>offeredsalary[i]>>maxjoboffers[i];
            markcompany[i]=1;
        }
        for(int i=0;i<n;i++)
        {
            long int maxsalary=0;
            int jobindex=-1;
            string s;
            cin>>s;
            for(int j=0;j<m;j++)
            {
                if(s[j]=='1')
                {
                    //mat[i].push_back(j);
                    if((offeredsalary[j]>maxsalary&&offeredsalary[j]>=minsalary[i])&&maxjoboffers[j]>0)
                    {
                        maxsalary=offeredsalary[j];
                        jobindex=j;
                    }

                }
            }
            if(jobindex!=-1)
            {
                maxjoboffers[jobindex]--;
                totalsalary+=offeredsalary[jobindex];
                totalcandidates++;
                if(markcompany[jobindex])
                {
                    companyhired--;
                    markcompany[jobindex]=0;
                }
            }
        }
        cout<<totalcandidates<<" "<<totalsalary<<" "<<companyhired<<" "<<endl;
    }
}
