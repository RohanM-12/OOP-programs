#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string Person_name;
	string Person_Address;
	int Age;
	long int Contact;

	Person()
	{
		cout << "default constructor is invoked" << endl;
		Person_name = "N/A";
		Person_Address = "N/A";
		Age = 0;
		Contact = 0;
	}
	Person(string name, string address, int p_age, long int con)
	{
		cout << "parametrized constructor is invoked" << endl;
		Person_name = name;
		Person_Address = address;
		Age = p_age;
		Contact = con;
	}
	Person(Person &p)
	{
		cout << "copy  constructor is invoked" << endl;
		Person_name = p.Person_name;
		Person_Address = p.Person_Address;
		Age = p.Age;
		Contact = p.Contact;
	}

	void getData()
	{
		cout << "Enter name of person :" << endl;
		cin >> Person_name;
		cout << "Enter address :" << endl;
		cin >> Person_Address;
		cout << "Enter age :" << endl;
		cin >> Age;
		cout << "Enter Contact :" << endl;
		cin >> Contact;
	}
	void putData()
	{

		cout << "The person name:" << Person_name << endl;
		cout << "address:" << Person_Address << endl;
		cout << "age" << Age << endl;
		cout << "Contact:" << Contact << endl;
	}
};
int main()
{
	Person P1;
	P1.getData();
	P1.putData();
	cout << "-----------Copy constructor ------------" << endl;
	Person P2(P1);
	P1.putData();

	cout << "-----------constructor Overloading------------" << endl;
	Person temp;
	temp.getData();
	Person P3(temp.Person_name, temp.Person_Address, temp.Age, temp.Contact);
	P3.putData();
}
