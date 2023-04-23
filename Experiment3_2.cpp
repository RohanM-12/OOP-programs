// multiple inheritance with function overriding
#include <iostream>
#include <string>
using namespace std;
class manager
{
public:
    int m_id, m_sal;
    string m_name, m_post;
    void getDetails()
    {
        cout << "Enter manager ID :" << endl;
        cin >> m_id;
        cout << "Enter manager name :" << endl;
        cin >> m_name;
        cout << "Enter manager post :" << endl;
        cin >> m_post;
        cout << "Enter manager salary :" << endl;
        cin >> m_sal;
    }
    void putDetails()
    {
        cout << "manager id-" << m_id << endl;
        cout << "manager name-" << m_name << endl;
        cout << "manager post-" << m_post << endl;
        cout << "manager salary-" << m_sal << endl;
    }
};
class employee
{
public:
    int emp_id, emp_sal;
    string ename;
    void getDetails()
    {
        cout << "Enter employee ID : " << endl;
        cin >> emp_id;
        cout << "Enter employee name :" << endl;
        cin >> ename;
        cout << "Enter employee salary : " << endl;
        cin >> emp_sal;
    }
    void putDetails()
    {
        cout << "employee id :" << emp_id << endl;
        cout << "employee name : " << ename << endl;
        cout << "employee post : " << emp_sal << endl;
    }
};
class labour
{
public:
    int lid, lsal;
    string lname;
    void getDetails()
    {
        cout << "enter labour id :" << endl;
        cin >> lid;
        cout << "enter labour name : " << endl;
        cin >> lname;
        cout << "enter labour salary : " << endl;
        cin >> lsal;
    }
    void putDetails()
    {
        cout << "labour id : " << lid << endl;
        cout << "labour name : " << lname << endl;
        cout << "labour post : " << lsal << endl;
    }
};
class company : public manager, public employee, public labour
{
public:
    int year;
    string cname;
    void getDetails()
    {
        cout << "enter company name : " << endl;
        cin >> cname;
        cout << "enter company year : " << endl;
        cin >> year;
        manager::getDetails();
        employee::getDetails();
        labour::getDetails();
    }
    void putDetails()
    {
        cout << "company name : " << cname << endl;
        cout << "company year : " << year << endl;
        manager::putDetails();
        employee::putDetails();
        labour::putDetails();
    }
};
int main()
{
    company obj;
    obj.getDetails();
    obj.putDetails();
    return 0;
}