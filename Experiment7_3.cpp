#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}
    void getdist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cin.ignore();
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'- " << inches << "\"";
    }
    bool operator<(Distance) const;
};

bool Distance ::operator<(Distance d2) const
{
    float bf2 = d2.feet + d2.inches / 12;
    float bf1 = feet + inches / 12;
    return (bf1 < bf2) ? true : false;
}

int main()
{
    Distance dist1;
    dist1.getdist();
    Distance dist2;
    dist2.getdist();
    cout << "\nDistance1= ";
    dist1.showdist();
    cout << "\nDistance2= ";
    dist2.showdist();
    if (dist1 < dist2)
    {
        cout << "\nDistance 1 is less than Distance 2";
    }
    else
    {
        cout << "Distance 1 is greater  than (or equal)than Distance 2";
        cout << endl;
    }
    return 0;
}
