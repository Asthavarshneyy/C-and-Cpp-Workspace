#include <bits/stdc++.h>
using namespace std;

void call_by_ref(int &a, int &b)
{
  a^=b;
  b^=a;
  a^=b;
}

pair<int, int> call_by_val(int a, int b)
{
  pair<int, int> ans(make_pair(b, a));
  return ans;
}

void call_by_ptr(int *a, int *b)
{
  *a^=*b;
  *b^=*a;
  *a^=*b;
}

int main()
{
  int a, b;
  cout<<"Enter two numbers";
  cin>>a>>b;
  cout<<"CALL BY REFERENCE"<<endl;
  call_by_ref(a, b);
  cout<<"a: "<<a<<" b: "<<b<<endl;
  cout<<"CALL BY POINTER"<<endl;
  call_by_ptr(&a, &b);
  cout<<"a: "<<a<<" b: "<<b<<endl;
  cout<<"CALL BY VALUE"<<endl;
  pair<int, int> ans=call_by_val(a, b);
  cout<<"a: "<<ans.first<<" b: "<<ans.second<<endl;


  return 0;
}