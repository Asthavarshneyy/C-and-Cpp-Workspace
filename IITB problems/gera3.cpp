#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin>>n;
  double l1[n],l2[n];
  double xsum=0, ysum=0;
  double xbar=0, ybar=0;

  for(int i=0;i<n;i++)
  {
    cin>>l1[i]>>l2[i];
    xsum+=l1[i];
    ysum+=l2[i];
   // cout<<l2[i];
  }
  xbar=xsum/n;
  ybar=ysum/n;
  double ans=((xsum*ysum)/n)-(xbar*ybar);

  cout<<fixed;
  cout.precision(2);
  cout<<ans;
  

   
}