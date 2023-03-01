#include <bits/stdc++.h>
using namespace std;

class B1
{
  public:
  void display()
  {
    cout<<"B1"<<endl;
  }
};

class D1: public B1{
  public:
  void display()
  {
    cout<<"D1"<<endl;
    B1::display();
  }
};

class D2: public B1{
  public:
  void display()
  {
    cout<<"D2"<<endl;
    B1::display();
  }
};

int main()
{
  D1 *obj1=new D1();
  D2 *obj2= new D2();

  obj1->display();
  cout<<"---------------"<<endl;
  obj2->display();
}