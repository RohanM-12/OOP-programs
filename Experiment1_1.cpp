#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number of students : ";
    cin >> num;
    string name[num];
    int roll_no[num];
    float CGPA[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter name of student : ";
        cin >> name[i];
        cout << "Enter roll number : ";
        cin >> roll_no[i];
        cout << "Enter CGPA : ";
        cin >> CGPA[i];
    }

    cout << endl
         << "Student Details : " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << endl;
        cout << "Name : " << name[i] << endl;
        cout << "Roll No. : " << roll_no[i] << endl;
        cout << "GGPA : " << CGPA[i] << endl;
    }

    return 0;
}