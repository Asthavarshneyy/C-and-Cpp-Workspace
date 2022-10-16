#include <bits/stdc++.h>
using namespace std;

int main()
{
  string prob;
  cout<<"Enter the problem: ";
  cin>>prob;
  int i=0;
  string a,b;
  char oper;
  while(prob[i]>='0' && prob[i]<='9')
   a+=prob[i++];
  oper=prob[i++];
  while(prob[i]>='0' && prob[i]<='9')
   b+=prob[i++];
  int num1=stoi(a);
  int num2=stoi(b);
  switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }
}
  
  
