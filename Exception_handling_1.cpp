// Exception with arguments
#include <iostream>
#include <string>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    class Inches_ex
    {
    public:
        string origin;
        float value;
        Inches_ex(string o, float v)
        {
            origin = o;
            value = v;
        }
    };
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    Distance(int f, float in)
    {
        if (in >= 12.0)
            throw Inches_ex("Two argument constructor ", in);
        feet = f;
        inches = in;
    }
    void get_distance()
    {
        cout << "Enter the feet : ";
        cin >> feet;
        cout << "Enter the inches : ";
        cin >> inches;

        if (inches >= 12.0)
            throw Inches_ex("get distance () function", inches);
    }
    void show_distance(void)
    {
        cout << "Feet :" << feet << endl;
        cout << "Inches :" << inches << endl;
    }
};

int main()
{
    try
    {
        Distance d1(17, 3.5);
        Distance d2;
        d2.get_distance();
        d1;
        d1.show_distance();
        d2.show_distance();
    }
    catch (Distance::Inches_ex ix)
    {
        cout << "Initilization error in " << ix.origin << " inches value of  " << ix.value << " is too large" << endl;
    }
}
