#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll mat[3][3];
		for(ll i=0;i<3;i++)
		{
			for(ll j=0;j<3;j++)
			{
				cin>>mat[i][j];
			}
		}
		ll mat1[3][3];
		for(ll i=0;i<3;i++)
		{
			for(ll j=0;j<3;j++)
			{
				mat1[i][j] = mat[i][j]-mat[(i+1)%3][j];
			}
		}
		/*for(ll i=0;i<3;i++)
		{
			for(ll j=0;j<3;j++)
			{
				cout<<mat1[i][j]<<" ";
			}
			cout<<endl;
		}*/
		ll stu[3]={0},no=0;
		for(ll i=0;i<3;i++)
		{
			ll flag1=0,flag2=0;
			for(ll j=0;j<3;j++)
			{
				if(mat1[i][j]>0)
				{
					flag1++;
				}
				else if(mat1[i][j]<0)
				{
					flag2++;
				}
			}
			if(flag1>0 && flag2==0){
				stu[i]++;
			}
			else if(flag2>0 && flag1==0){
				stu[(i+1)%3]++;
			}else{
				no = 1;
				break;
			}
		}
		/*for(ll i=0;i<3;i++)
			cout<<stu[i]<<" ";
		cout<<endl;*/
		if(no==1)
		{
			cout<<"no\n";
		}else{
			sort(stu,stu+3);
			for(ll i=1;i<3;i++)
			{
				if(stu[i]==stu[i-1]){
					no=1;
					break;
				}
			}
			if(no==0){
				cout<<"yes\n";
			}else{
				cout<<"no\n";
			}
		}
	}
	return 0;
}