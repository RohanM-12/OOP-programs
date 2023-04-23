#include <iostream>
#include <string>
using namespace std;

const int size = 3; // stack hold
class Stack
{
private:
    int stack[size]; // stack array of integer
    int top;         // Index of top of stack
public:
    class Full
    {
    }; // Exception class
    class Empty
    {
    };      // Expection class
    Stack() // Constructor
    {
        top = -1;
    }
    void push(int item) // put no of stack
    {
        if (top >= size - 1)
            throw Full();
        stack[++top] = item;
    }
    int pop()
    {
        if (top < 0)
            throw Empty();
        return stack[top--];
    }
};

int main()
{
    Stack s1;
    try
    {
        for (int i = 0; i <= 4; i++)
        {
            int temp = 0;
            cout << "Enter element to insert :";
            cin >> temp;
            s1.push(temp);
            cout << endl;
        }
        for (int i = 0; i <= 4; i++)
        {
            s1.pop();
        }
        cout << "1st poped : " << s1.pop() << endl;
        cout << "2nd poped : " << s1.pop() << endl;
        cout << "3rd poped : " << s1.pop() << endl;
        cout << "4th poped : " << s1.pop() << endl;
        cout << endl;
    }
    catch (Stack::Full)
    {
        cout << "Exception Stack Full" << endl;
    }
    catch (Stack::Empty)
    {
        cout << "Exception Stack Empty" << endl;
    }
    return 0;
}
