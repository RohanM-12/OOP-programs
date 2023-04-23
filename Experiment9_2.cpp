#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float Area() = 0; // pure virtual function
};

class Square : public Shape
{
private:
    float side;

public:
    Square(float s)
    {
        side = s;
    }
    float Area()
    {
        return side * side;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
    float Area()
    {
        return 3.14 * radius * radius;
    }
};
class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    float Area()
    {
        return length * width;
    }
};

class Triangle : public Shape
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }
    float Area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    float a = 0, b = 0;
    Shape *obj[4];
    cout << "Enter value for square : ";
    cin >> a;
    obj[0] = new Square(a);
    cout << "Area of square : " << obj[0]->Area() << endl;
    cout << "Enter value for rectrangle : ";
    cin >> a;
    cin >> b;
    obj[1] = new Rectangle(a, b);
    cout << "Area of rectrangle : " << obj[1]->Area() << endl;
    cout << "Enter value for Circle : ";
    cin >> a;
    obj[2] = new Circle(a);
    cout << "Area of Circle : " << obj[2]->Area() << endl;
    cout << "Enter value for triangle : ";
    cin >> a;
    cin >> b;
    obj[3] = new Triangle(a, b);
    cout << "Area of Triangle : " << obj[3]->Area() << endl;
    return 0;
}
