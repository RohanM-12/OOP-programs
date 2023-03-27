#include <iostream>
#include<string>
using namespace std;
class Employee
{
    public:
   int salary=0;
   string name="";
   int age=0;
   Employee(int sal,string name)
   {
    salary=sal;
    name=name;
   }
   Employee(int sal,int name , int age)
   {

    salary=sal;
    age=age;
    name=name;
   }

   void display()
   {
    cout<<"Name :"<<name<<endl;
    cout<<"Salary :"<<salary<<endl;
    cout<<"age :"<<age<<endl;
   }

   ~Employee(){
            cout<<"Destructor called :"<<endl;
   }

};
int main ()
{


     Employee emp1(20000,"Rohan");
     Employee emp2(600000,"amit");
     emp1.display();
     emp2.display();
     


    return -1;
}

