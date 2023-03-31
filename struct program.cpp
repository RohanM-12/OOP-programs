#include<iostream>
#include<string>
using namespace std;

struct Book{
    string book_name;
    string author_name;
    int published_year;
    float cost;
};
int main(){
    int n;
    cout<<"Enter the no of books to store :"<<endl;
    cin>>n;

    Book b[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"Enter the book name :"<<endl;
        getline(cin,b[i].book_name);

        cout<<"Enter the author name :"<<endl;
        getline(cin,b[i].author_name);

        cout<<"Enter the published year :"<<endl;
        cin>>b[i].published_year;

        cout<<"Enter the price of book :"<<endl;
        cin>>b[i].cost;
    }

    for(int i=0;i<n;i++)
    {
        cout<<"---------------------  BOOK DETAILS -------------------------\n"<<endl;
        cout<<i+1<<" book details. "<<endl;
        cout<<"Book name      :"<<b[i].book_name<<endl;
        cout<<"Author name    :"<<b[i].author_name<<endl;
        cout<<"Published year :"<<b[i].published_year<<endl;
        cout<<"Price of book  :"<<b[i].cost<<endl;
        cout<<"---------------------------------------------------------------\n"<<endl;
    }

    return 0;
}
