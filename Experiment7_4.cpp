#include <iostream>
#include <string.h>
using namespace std;

class String
{
public:
    char str[100];

public:
    void putStr()
    {
        cout << str;
    }
    void getStr()
    {
        cout << "\n Enter String  :   ";
        cin.getline(str, 200);
    }
    String operator+(String x)
    {
        String s;
        strcat(str, x.str);
        strcpy(s.str, str);
        return s;
    }
};
int main()
{
    String str1, str2, str3;

    str1.getStr();
    str2.getStr();
    cout << "\n\n First String :  ";
    str1.putStr();

    cout << "\n\n Second String :  ";
    str2.putStr();
    str3 = str1 + str2;
    cout << "\n\n Concatenated String :  ";
    str3.putStr();

    return 0;
}
