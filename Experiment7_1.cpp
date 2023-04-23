#include <iostream>
using namespace std;

double area(double radius) // area of circle
{
    cout << endl;
    cout << "Enter the radius of circle : " << endl;
    cin >> radius;
    cout << "Area of circle : ";
    return 3.14 * radius * radius;
}
int area(int len, int bre, int height) // area of triangle
{
    cout << endl;
    cout << "Enter the length , breadth and height: " << endl;
    cin >> len >> bre >> height;
    cout << "Area of triangle : ";
    return (len * bre * height) / 2;
}
int area(int side) //  area of square
{
    cout << endl;
    cout << "Enter the side of square :" << endl;
    cin >> side;
    cout << "Area of square : ";
    return side * side;
}

int area(int length, int breadth) // area of rectangle
{
    cout << endl;
    cout << "Enter the length and breadth :" << endl;
    cin >> length >> breadth;
    cout << "Area of Rectangle : ";
    return length * breadth;
}
int main()
{
    cout << "*****Function overloading*****" << endl;
    cout << "Calculating Area of circle : " << area(2.23) << endl;
    cout << "Calculating Area of triangle : " << area(14, 1, 16) << endl;
    cout << "Calculating Area of rectangle : " << area(12, 13) << endl;
    cout << "Calculating Area of square : " << area(12) << endl;
    return 0;
}
