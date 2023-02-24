#include <iostream>
#include<string.h>
#include <math.h>
#include <algorithm>
using namespace std;

int fact(int n) 
{
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}


double expo(double x, int n)
{
  double ans=0;
  for(int i=0;i<=n;i++)
  {
    double term= pow(x,i)/fact(i);
    ans+=term;
  }
  return ans;
}

double ln(double x, int n)
{
  double ans=0;
  for(int i=0;i<=n;i++)
  {
    double term=pow(-1,i+1)*(pow(x,i)*i);
    ans+=term;
  }
  return ans;
}

int main()
{
  double x;
  cin>>x;
  int n;
  cin>>n;
  double ans=expo(x,n)*ln(x,n);
  
  cout<<fixed;
  cout.precision(5);
  cout<<ans;
}