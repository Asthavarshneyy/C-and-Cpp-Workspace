#include <bits/stdc++.h>
using namespace std;

class Base
{
  private:
  int i=101;
  public:
  int j=201;
  protected:
  int k=301;
  private:
  void privateFun()
  {
    cout<<"This is private method"<<endl;
  }
  public:
  void publicFun()
  {
    cout<<"This is public method"<<endl;
  }
  protected:
  void protectFun()
  {
    cout<<"This is protected method"<<endl;
  }
};

int main()
{
  Base obj;
  // cout<<obj.i<<endl;
  cout<<obj.j<<endl;
  // cout<<obj.k<<endl;
  // obj.privateFun();
  obj.publicFun();
  // obj.protectFun();

}