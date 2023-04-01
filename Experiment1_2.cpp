#include <iostream>
#include <string>
using namespace std;

struct Book
{
    string book_name;
    string author_name;
    int published_year;
    int cost;

    void setData()
    {

        cout << "Enter the book name :" << endl;
        cin >> book_name;
        cout << "Enter the author name :" << endl;
        cin >> author_name;
        cout << "Enter the published year :" << endl;
        cin >> published_year;
        cout << "Enter the price of book :" << endl;
        cin >> cost;
    }
    void printData()
    {

        cout << "---------------------  BOOK DETAILS -------------------------\n"
             << endl;
        cout << " book details. " << endl;
        cout << "Book name      :" << book_name << endl;
        cout << "Author name    :" << author_name << endl;
        cout << "Published year :" << published_year << endl;
        cout << "Price of book  :" << cost << endl;
        cout << "---------------------------------------------------------------\n"
             << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the no of books to store :" << endl;
    cin >> n;

    Book obj[n];
    for (int i = 0; i < n; i++)
    {
        Book BK_obj;

        BK_obj.setData();
        obj[i] = BK_obj;
    }
    for (int i = 0; i < n; i++)
    {
        Book BK_obj;
        BK_obj = obj[i];
        BK_obj.printData();
    }

    return 0;
}
