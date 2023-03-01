#include <iostream>
using namespace std;

class Test
{
  int max_marks;
  int duration_min;

  public:
  //default const
  Test()
  {
    max_marks=100;
    duration_min=180;
  }

  //parametrized const
  Test(int arg1, int arg2)
  {
    max_marks=arg1;
    duration_min=arg2;
  }
  
  //setter for marks
  void set_marks(int arg)
  {
    max_marks=arg;
  }

  //setter for duration
  void set_duration(int arg)
  {
    duration_min=arg;
  }

  //getter for marks
  int get_marks()
  {
    return max_marks;
  }

  //getter for duration
  int get_duration()
  {
    return duration_min;
  }
};

int main()
{
  //calling by default const
  Test *obj1= new Test();
  //printing using getter
  cout<<"Default Constructor"<<endl;
  cout<<"Maximum Marks are: "<<obj1->get_marks()<<endl;
  cout<<"Maximum Duration is: "<<obj1->get_duration()<<endl;
  //calling by parameterized const
  Test *obj2= new Test(30, 60);
  cout<<"Parameterized Constructor"<<endl;
  cout<<"Maximum Marks are: "<<obj2->get_marks()<<endl;
  cout<<"Maximum Duration is: "<<obj2->get_duration()<<endl;
}