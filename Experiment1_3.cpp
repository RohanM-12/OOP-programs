#include <iostream>
using namespace std;
int main()
{
    string s1, s2, s3, s4;

    s1 = "Information";
    s2 = "Technology";

    cout << "Enter first string :" << endl;
    cin >> s1;
    cout << "Enter Second string :" << endl;
    cin >> s2;

    // copy
    s3 = s1;
    s4 = s2;
    cout << s1 << " " << s2 << endl;
    cout << s3 << " " << s4 << endl;
    cout << endl;
    // concanicate
    cout << "Concatination :" << endl;
    string s5 = s1 + " " + s2 + " is the string";
    cout << s5 << endl;
    cout << endl;
    // swap
    cout << "Before swapping : ";
    cout << s1 << " " << s2 << endl;
    s1.swap(s2);
    cout << "After swapping : ";
    cout << s1 << " " << s2 << endl;

    // replacing string
    s3.replace(0, 6, "replaced");
    cout << "replaced string :" << s3;

    // calulate length
    cout << "Lengths of string :" << endl;
    cout << s1 << " " << s1.length() << endl;
    cout << s2 << " " << s2.length() << endl;
    cout << s5 << " " << s5.length() << endl;
}