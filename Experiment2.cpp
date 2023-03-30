#include <iostream>
#include <stdio.h>
using namespace std;

class Vehicle
{
public:
    string Vehicle_brand;
    string Vehicle_color;
    int Production_year;
    string Engine = "null";
    string Engine_Type = "null"; // Petrol/Diesel
    int Milage = -1;
    int Top_speed;

    Vehicle(string V_brand, string V_color, int P_year, string engine, int top_speed)
    {

        Vehicle_brand = V_brand;
        Vehicle_color = V_color;
        Production_year = P_year;
        Engine = engine;
        Top_speed = top_speed;
    }
    Vehicle(string V_brand, string V_color, int P_year, string engine, string E_type, int milage, int top_speed)
    {
        Vehicle_brand = V_brand;
        Vehicle_color = V_color;
        Production_year = P_year;
        Engine = engine;
        Engine_Type = E_type; // Petrol/Diesel
        Milage = milage;
        Top_speed = top_speed;
    }
    void Display()
    {
        cout << "Brand : " << Vehicle_brand << endl;
        cout << "Color : " << Vehicle_color << endl;
        cout << "Production Year : " << Production_year << endl;
        cout << "Engine : " << Engine << endl;
        cout << "Engine Type : " << Engine_Type << endl; // Petrol/Diesel
        cout << "Milage : " << Milage << endl;
    }

    ~Vehicle()
    {
        cout << "Destructor called " << endl;
    }
};

int main()
{
    Vehicle V1("Toyota", "white", 2020, "2.7 L 4 cylinder", 260);
    Vehicle V2("Ford", "Black", 2019, "V8 Turbocharged", "Pertrol", 7, 280);

    cout << "------------Details of v1-------------" << endl;
    V1.Display();
    cout << "------------Details of v2-------------" << endl;
    V2.Display();
    return 0;
}