#include<bits/stdc++.h>
using namespace std;
vector<long long int>arr(100005);
vector<long long int>arr1(100005);
vector<long long int>temp(100005);
int  mergeSort(long long int,long long int);
int merger(long long int,long long int,long long int);
int solve()
{
    arr.clear();
    arr1.clear();
    temp.clear();

    map<long long int,long long int>m;
    long long int n;
    cin>>n;
    arr.resize(n);
    arr1.resize(n);
    temp.resize(n);
    for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
        }
    if(n==1)
        {
            cout<<0<<" ";
            return 0;
        }
     long long int ans=mergeSort(0,n-1);
     for(long long int i=0;i<n;i++)
        {
            if(temp[i]!=0)
            m[temp[i]]=i+1;
            else
            i--;
           // cout<<arr[i]<<" ";
        }
    for(long long int i=0;i<n;i++)
    {
        long long int ind=m[arr1[i]];
     //   cout<<arr1[i]<<" "<<ind<<endl;
        ans+=n+1-2*ind;
        cout<<ans<<" ";
    }
     //cout<<"\n"<<ans<<endl;
     return 0;
}

int mergeSort(long long int left,long long int right)
{
  long long int mid, inv_count = 0;
  if (right > left)
  {

    mid = (right + left)/2;

    inv_count  = mergeSort(left, mid);
    inv_count += mergeSort(mid+1, right);

    inv_count += merger(left, mid, right);
  }
  return inv_count;
}

int merger(long long int left,long long int mid,long long int right)
{
  long long int i, j, k;
  long long int inv_count = 0;

  i = left;
  j = mid+1;
  k = left;
  while ((i <= mid ) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];

      inv_count = inv_count + mid-i+1;
    }
  }

  while (i <= mid )
    temp[k++] = arr[i++];
  while (j <= right)
    temp[k++] = arr[j++];

  for (i=left; i <= right; i++)
    arr[i] = temp[i];

  return inv_count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            solve();
            cout<<endl;
        }
}
