#include<iostream>
using namespace std;
int main()
{
    string s1, s2, s3, s4;

    s1 = "GCE";
    s2 = "Karad";
    
    //copy
    s3 = s1;
    s4 = s2;
    cout<<s1<<" "<<s2<<endl;
    cout<<s3<<" "<<s4<<endl;
    cout<<endl;
    //concanicate
    string s5 = s1 + " "+s2 + " IT";
    cout<<s5<<endl;
    cout<<endl;
    //swap
    cout<<"Before swapping : ";
    cout<<s1<<" "<<s2<<endl;;
    s1.swap(s2);
    cout<<"After swapping : ";
    cout<<s1<<" "<<s2<<endl;

    //calulate length
    cout<<s1<<" "<<s1.length()<<endl;
    cout<<s2<<" "<<s2.length()<<endl;
    cout<<s5<<" "<<s5.length()<<endl;

}