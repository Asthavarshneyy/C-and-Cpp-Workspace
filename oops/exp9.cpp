#include <bits/stdc++.h>
using namespace std;

//circle
double area(double r)
{
  const double pi=22/7;
  return pi*r*r;
}

//rectangle
double area(double l, double b)
{
  return l*b;
}

//traingle
double area(double a, double b, double c)
{
  double s=(a+b+c)/2;
  double ans=sqrt(s*(s-a)*(s-b)*(s-c));
  return ans;
}

int main()
{
  cout<<"Area of rectangle with l=3 and b=5 is "<<area(3, 5)<<endl;
  cout<<"Area of triangle with a=3, b=6 and c=5 is "<<area(3, 6, 5)<<endl;
  cout<<"Area of circle with r=3 is "<<area(3)<<endl;
  return 0;
}