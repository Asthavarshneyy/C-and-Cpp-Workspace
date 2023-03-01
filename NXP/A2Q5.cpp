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

class Child: public Base{
  public:
  void masterMethod()
  {
    // cout<<"i= "<<i<<endl;
    cout<<"j= "<<j<<endl;
    cout<<"k= "<<k<<endl;
    // privateFun();
    publicFun();
    protectFun();
  }
};

int main()
{
  Child obj;
  obj.masterMethod();
}
