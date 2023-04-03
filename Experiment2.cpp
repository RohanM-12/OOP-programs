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

    int type = -1;

    cout << "Enter Type 1/2: " << endl;
    cin >> type;

    if (type == 1)
    {
        string Vehicle_brand;

        cout << "Enter Vehicle Brand :" << endl;
        cin >> Vehicle_brand;

        string Vehicle_color;
        cout << "Enter Color :" << endl;
        cin >> Vehicle_color;

        int Production_year;
        cout << "enter production year:" << endl;
        cin >> Production_year;

        string Engine = "null";
        cout << "enter Engine variant:" << endl;
        cin >> Engine;

        int Top_speed;
        cout << "enter Top speed:" << endl;
        cin >> Top_speed;

        Vehicle v1(Vehicle_brand, Vehicle_color, Production_year, Engine, Top_speed);
        cout << "------------Details of v1-------------" << endl;
        v1.Display();
    }
    else if (type == 2)
    {
        string Vehicle_brand;

        cout << "Enter Vehicle Brand :" << endl;
        cin >> Vehicle_brand;

        string Vehicle_color;
        cout << "Enter Color :" << endl;
        cin >> Vehicle_color;

        int Production_year;
        cout << "enter production year:" << endl;
        cin >> Production_year;

        string Engine = "null";
        cout << "enter Engine variant:" << endl;
        cin >> Engine;

        string Engine_Type = "null"; // Petrol/Diesel
        cout << "Enter engine type P/D:" << endl;
        cin >> Engine_Type;

        int Milage = -1;
        cout << "enter Milage:" << endl;
        cin >> Milage;

        int Top_speed;
        cout << "enter Top speed:" << endl;
        cin >> Top_speed;
        Vehicle v2(Vehicle_brand, Vehicle_color, Production_year, Engine, Engine_Type, Milage, Top_speed);
        cout << "------------Details of v2-------------" << endl;
        v2.Display();
    }

    return 0;
}