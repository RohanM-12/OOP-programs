#include <iostream>
#include <stdio.h>
using namespace std;

class c1
{
public:
    void printdata()
    {

        cout << "c1";
    }
};

class c2 : c1
{
public:
    void printdata()
    {

        cout << "c2";
    }
};

int main()
{

    c2 obj;
    obj.printdata();

    return 0;
}