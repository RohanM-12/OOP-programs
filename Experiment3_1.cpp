// multilevel inheritance with function overriding
#include <iostream>
#include <string>
using namespace std;
class company
{
public:
    int year;
    string cname;
    void getDetails()
    {
        cout << "Enter Your company name:" << endl;
        cin >> cname;
        cout << "Enter Your company year:" << endl;
        cin >> year;
    }
    void putDetails()
    {
        cout << " name of company :" << cname << endl;
        cout << "company year:" << year << endl;
    }
};
class manager : public company
{
public:
    int mid, msal;
    string mname;
    void getDetails()
    {
        company::getDetails();
        cout << "Enter manager id ;" << endl;
        cin >> mid;
        cout << "Enter manager name :" << endl;
        cin >> mname;
        cout << "Enter manager salary-" << endl;
        cin >> msal;
    }
    void putDetails()
    {
        company::putDetails();
        cout << "Manager id-" << mid << endl;
        cout << "Manager name-" << mname << endl;

        cout << "Manager salary-" << msal << endl;
    }
};
class employee : public manager
{
public:
    int eid, esal;
    string ename;
    void getDetails()
    {
        manager::getDetails();
        cout << "enter employee id-" << endl;
        cin >> eid;
        cout << "enter employee name-" << endl;
        cin >> ename;
        cout << "enter employee salary-" << endl;
        cin >> esal;
    }
    void putDetails()
    {
        manager::putDetails();
        cout << "employee id:" << eid << endl;
        cout << "employee name:" << ename << endl;
        cout << "employee Salary: " << esal << endl;
    }
};
class labour : public employee
{
public:
    int lid, lsal;
    string lname;
    void getDetails()
    {
        employee::getDetails();
        cout << "Enter labour id :" << endl;
        cin >> lid;
        cout << "Enter labour name :" << endl;
        cin >> lname;
        cout << "Enter labour salary :" << endl;
        cin >> lsal;
    }
    void putDetails()
    {
        employee::putDetails();
        cout << "labour id :" << lid << endl;
        cout << "labour name :" << lname << endl;
        cout << "labour salary : " << lsal << endl;
    }
};
int main()
{
    labour obj;
    obj.getDetails();
    obj.putDetails();
    return 0;
}