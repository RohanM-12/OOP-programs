#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter the number of student" << endl;
    int n;
    cin >> n;
    string Stud_name[5];
    int Stud_id[5];
    string Stud_branch[5];
    int Sub_1[5], Sub_2[5], Sub_3[5], Sub_4[5], Sub_5[5];
    float avg[5];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter ID of Student : " << endl;
        cin >> Stud_id[i];
        cin.ignore();
        cout << "Enter name of Student : " << endl;
        getline(cin, Stud_name[i]);
        cout << "Enter the Branch : " << endl;

        getline(cin, Stud_branch[i]);
        cout << "Enter the marks :" << endl;
        cin >> Sub_1[i];
        cin >> Sub_2[i];
        cin >> Sub_3[i];
        cin >> Sub_4[i];
        cin >> Sub_5[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "---------------- DETAILS OF  STUDENT  -----------------\n"
             << endl;
        cout << "ID              : " << Stud_id[i] << endl;
        cout << "Branch          : " << Stud_branch[i] << endl;
        cout << "Name of student : " << Stud_name[i] << endl;
        cout << "Marks Obtained    : ";
        cout << Sub_1[i] << " " << Sub_2[i] << " " << Sub_3[i] << " " << Sub_4[i] << " " << Sub_5[i] << endl;
        avg[i] = (Sub_1[i] + Sub_2[i] + Sub_3[i] + Sub_4[i] + Sub_5[i]) / 5.00;
        cout << "Average         : " << avg[i] << " % \n " << endl;
    }

    return 0;
}
