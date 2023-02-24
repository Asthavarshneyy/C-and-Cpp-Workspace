#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;


double compute(char c, double num1, double num2)
{
  double ans;
  if(c=='+')
   ans=num1+num2;
  else if(c=='-')
  ans=num1-num2;
  else if(c=='*')
  ans=num1*num2;
  else if(c=='/')
  ans=num1/num2;
  return ans;

}


int main()
{
  string s="";
  cin>>s;
  double num1=s[0]-48;

  int i=0;
  double ans=0;
  while(s[i+1]!='=')
  {
    double num2=s[i+2]-48;
   
    char op=s[i+1];
    
    ans=compute(op,num1,num2);
 
    i+=2;
    num1=ans;
    
  }

  cout<<fixed;
  cout.precision(2);
  cout<<num1;
  return 0;
}