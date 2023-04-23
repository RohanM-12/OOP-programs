#include <iostream>
#include <stdio.h>
using namespace std;

class Student
{
protected:k
    int rollno;

public:
    void getno()
    {
        cout << "Enter Roll no :" << endl;
        cin >> rollno;
    }

    void putno()
    {
        cout << "ROLL No: 4" << rollno << endl;
    }
};

class Test : virtual public Student
{
protected:
    float sub1, sub2, sub3;

public:
    void getMarks()
    {
        cout << "Enter Score for Maths : " << endl;
        cin >> sub1;
        cout << "Enter Score for English : " << endl;
        cin >> sub2;
        cout << "Enter Score for Science : " << endl;
        cin >> sub3;
    }
    void putMarks()
    {

        cout << "Subject 1 : " << sub1 << " Subject 2 : " << sub2 << " Subject 3 : " << sub3 << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;

public:
    void getScore()
    {
        cout << "Enter Score for your sport winnigs : " << endl;
        cin >> score;
    }

    void putScore()
    {
        cout << "Score for your sport winnigs : " << score << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    float total;

public:
    void display()
    {
        total = sub1 + sub2 + sub3;
        cout << "--------------------Marks------------------" << endl;
        putno();
        putMarks();
        putScore();
        cout << "Total is : " << total << endl;
    }
};
int main()
{
    Result r;
    r.getno();
    r.getMarks();
    r.getScore();
    r.display();

    return 0;
}