#include <iostream>
using namespace std;
class Customer
{
    string cName, accntType;
    float accntBal, accntNo;

public:
    friend void Display(Customer c);
    friend class Loan;
    friend class Bank;
    void getData()
    {
        cout << "Enter Customer Name: ";
        cin >> cName;
        cout << "Enter Account Type: ";
        cin >> accntType;
        cout << "Enter Account Number: ";
        cin >> accntNo;
        cout << "Enter your Initial Balance: ";
        cin >> accntBal;
    }
};

class Bank
{
    float amntWthd, amntDept;
    int choice;

public:
    void Operations(Customer c)
    {
        do
        {
            cout << "Enter Operation you want to perform: " << endl;
            cout << "1.Withdraw\t2.Deposit\t3.Display Balance\t.Exit\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                cout << "Enter amount to be withdrawn: ";
                cin >> amntWthd;
                if (c.accntBal < amntWthd)
                {
                    cout << "Your account does not have sufficient amount.\n";
                }
                else
                {

                    c.accntBal = c.accntBal - amntWthd;
                }
            }
            break;
            case 2:
            {
                cout << "Enter amount to be deposited: ";
                cin >> amntDept;
                c.accntBal = c.accntBal + amntDept;
            }
            break;
            case 3:
            {
                cout << "Account Details:\n";
                cout << "Account Holder: " << c.cName << endl;
                cout << "Account Number: " << c.accntNo << endl;
                cout << "Current Balance: Rs. " << c.accntBal << endl;
            }
            break;
            case 4:
            {
                cout << endl;
                return;
            }
            }
        } while (choice <= 4);
    }
};
class Loan
{

    int choice2;
    string s;
    float percent;

public:
    float reqAmnt;
    void getLoan(Customer c)
    {
        cout << "Type of Loan you Want to apply for: \n";
        cout << "1.Education\t2.Car\t3.Home\t4.Agriculture\n";
        cout << "Enter Choice: ";
        cin >> choice2;
        do
        {
        m:
            cout << "Enter amount you ask for: ";
            cin >> reqAmnt;
            if (reqAmnt > 10 * (c.accntBal))
            {
                cout << "Sorry!! amount can't be provided!!\n Loan amount can only be 10 times of account balance...." << endl;
                cout << "Do you still want a loan ? Press Y/N";
                cin >> s;
                if (s == "Y" || s == "y")
                {
                    goto m;
                }
                else
                {
                    return;
                }
            }
            else
            {
                switch (choice2)
                {
                case 1:
                {
                    cout << "Education Loan:\n";
                    cout << "Our Loan % for this category is 5% \n";
                    cout << "Processing...\n";
                    cout << "You have Sanctioned Amount for Loan is Rs." << reqAmnt << endl;

                    return;
                }
                break;
                case 2:
                {
                    cout << "Car Loan:\n";
                    cout << "Our Loan % for this category is 12% \n";
                    cout << "You have Sanctioned Amount for Loan is Rs." << (75 / 100) * reqAmnt << endl;

                    return;
                }
                break;
                case 3:
                {
                    cout << "Home Loan:\n";
                    cout << "Our Loan % for this category is 8% \n";
                    cout << "You have Sanctioned Amount for Loan is Rs." << (85 / 100) * reqAmnt << endl;
                    return;
                }
                break;
                case 4:
                {
                    cout << "Agriculture Loan:\n";
                    cout << "Our Loan % for this category is 9% \n";
                    cout << "Processing...\n";
                    cout << "You have Sanctioned Amount for Loan is Rs." << (90 / 100) * reqAmnt << endl;
                    return;
                }
                break;
                }
            }

        } while (!true);
    }
};
void Display(Customer c)
{
    cout << "\nDisplaying Details: \n\n";
    cout << "Account Holder: " << c.cName << endl;
    cout << "Account Number: " << c.accntNo << endl;
    cout << "Account Type: " << c.accntType << endl;
}
int main()
{
    string s;
    Customer c;
    c.getData();
    Bank b1;
    b1.Operations(c);
    Display(c);
    cout << "Do you want a Loan?Y/N" << endl;
    cin >> s;
    if (s == "Y" || s == "y")
    {
        Loan l1;
        l1.getLoan(c);
    }
    return 0;
}