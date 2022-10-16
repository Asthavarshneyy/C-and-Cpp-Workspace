#include <iostream>
#include <vector>
using namespace std;

void merge( vector <int>& a,int beg, int mid, int end)
{
  int len1=mid-beg+1;
  int len2=end-mid;
  int left[len1],right[len2];
  int i=0,j=0,k=beg;
  for(i=0;i<len1;i++)
    left[i]=a[beg+i];
  for(i=0;i<len2;i++)
    right[i]=a[mid+1+i];
  i=0;
  while(i<len1 && j<len2)
  {
    if(left[i]<=right[j])
    {
      a[k]=left[i];
      i++;
    }
    else
    {
      a[k]=right[j];
      j++;
    }
    k++;
  }
  while(i<len1)
  {
    a[k]=left[i];
    i++;
    k++;
  }
  while(j<len2)
  {
    a[k]=right[j];
    j++;
    k++;
  }
}

void mergesort(vector <int>& a, int beg, int end)
{
  if(beg<end)
  {
    int mid=beg+(end-beg)/2;
    mergesort(a,beg,mid);
    mergesort(a,mid+1,end);
    merge(a,beg,mid,end);
  }
}

int main()
{
  cout << "Welcome to merge sort"<< endl;
  vector <int> a;
  cout<< "Enter numbers for a list to be sorted"<< endl;
  cout<<"enter stop to indicate EOF\n";
  int x,len=0;
  while(cin)
  {
    cin>>x;
    if(!cin.fail())
    {
      a.push_back(x);
      len++;
    }
  }
  /*int a[]={12,2,14,4};
  int len=4; */
  cout<<"The unsorted list is\n";
  for(int i=0;i<len;i++)
    cout<<a[i]<<" ";
  cout<<"\n";
  mergesort(a,0,len-1);
  cout<<"The sorted list is\n";
  for(int i=0;i<len;i++)
    cout<<a[i]<<" ";
  cout<<"\n";
  return 0;
}