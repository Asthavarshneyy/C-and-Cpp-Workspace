#include <bits/stdc++.h>
using namespace std;

int main()
{
  string prob;
  cin>>prob;
  int i=0;
  string num1,num2, op;
  while(prob[i]>='0' && prob[i]<='9')
   num1+=prob[i++];
  op=prob[i++];
   while(prob[i]>='0' && prob[i]<='9')
   num2+=prob[i++];
  cout<<num1<<" "<<op<<" "<<num2;
  
  
