#include <iostream>
using namespace std;
class student
{
    string stdname;
    int age;

public:
    student()
    {
        cout << "Constructer is called " << endl;
    }
    student(string name, int age)
    {
        this->stdname = name;
        this->age = age;
    }
    void operator delete(void *p)
    {
        cout << "Overloaded delete operator called";
        free(p);
    }
    void *operator new(size_t size)
    {
        cout << "Overloading new operator with size " << size << endl;
        void *p = ::operator new(size);
        return p;
    }
    void display()
    {
        cout << "Name : " << stdname << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    string name;
    int age;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the age: ";
    cin >> age;
    student *p = new student(name, age);
    p->display();
    delete p;
}