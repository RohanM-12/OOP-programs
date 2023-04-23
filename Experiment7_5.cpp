#include <iostream>
using namespace std;
class Counter
{
private:
    unsigned int count;

public:
    Counter() : count(0) {}
    unsigned int get_Count()
    {
        return count;
    }
    Counter operator++(int)
    {
        Counter temp;
        temp.count = count++;
        return temp;
    }
};
int main()
{
    Counter C1, C2;
    cout << "C1 : " << C1.get_Count() << endl;
    cout << "C2 : " << C2.get_Count() << endl;
    C1++;
    C2++;
    C2++;
    cout << "C1 : " << C1.get_Count() << endl;
    cout << "C2 : " << C2.get_Count() << endl;
    return 0;
}