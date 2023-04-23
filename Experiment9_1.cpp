#include <iostream>

using namespace std;

class Shape
{
public:
    virtual float Area()
    {
        cout << "Virtual function in base class default implemetation";
        return 0.0;
    };
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
int main()
{
    float val1 = 0, val2 = 0, val3 = 0.0;

    Shape *s[4];
    cout << "Enter value for Area of square : ";
    cin >> val1;
    s[0] = new Square(val1);
    cout << "Area of square : " << s[0]->Area() << endl;
    cout << "Enter value for Area of rectrangle : ";
    cin >> val1;
    cin >> val2;
    s[1] = new Rectangle(val1, val2);
    cout << "Area of rectrangle : " << s[1]->Area() << endl;
    cout << "Enter value for Area of Circle : ";
    cin >> val1;
    s[2] = new Circle(val1);
    cout << "Area of Circle : " << s[2]->Area() << endl;
    cout << "Enter value for Area of triangle : ";
    cin >> val1;
    cin >> val2;
    s[3] = new Triangle(val1, val2);
    cout << "Area of Triangle : " << s[3]->Area() << endl;

    return 0;
}
