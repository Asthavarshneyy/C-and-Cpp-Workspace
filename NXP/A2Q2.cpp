#include <bits/stdc++.h>
using namespace std;

class Person
{
  public:
  int age;
  string name;

};

//derived class
class Student: public Person{
  public:
  int rollNumber;
  string school;

  //parameterized const
  Student(int age, string name, int rollNumber, string school)
  {
    this->age=age;
    this->name=name;
    this->rollNumber=rollNumber;
    this->school=school;
  }

  void Print()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Roll Number: "<<rollNumber<<endl;
    cout<<"School: "<<school<<endl;
  }

};

int main()
{
  int age, rollNumber;
  string name, school;
  cout<<"Enter the name of the student: ";
  cin>>name;
  cout<<"Enter the age of the student: ";
  cin>>age;
  cout<<"Enter the roll number of the student: ";
  cin>>rollNumber;
  cout<<"Enter the school of the student: ";
  cin>>school;
  Student *s=new Student(age, name, rollNumber, school);
  cout<<"The details of the student are: "<<endl;
  s->Print();
}