#include<iostream>
#include<string>
using namespace std;
int main()
{
    //decelaring the string
    string str1;
    string str2;
    string str3;
    string str4 ="Diploma in a computer Engineering";
    cout<<"Enter the first string :"<<endl;
    getline(cin,str1);
    cout<<"Enter the second string :"<<endl;
    getline(cin,str2);
    cout<<"Enter the third string :"<<endl;
    getline(cin,str3);
    cout<<endl;

    // print length of string
    cout<<"Printing the length of string....."<<endl;
    int length1=str1.length();
    int length2=str2.length();
    int length3=str3.length();
    cout<<"Length of first string :"<<length1<<endl<<"Length of second string :"<<length2<<endl<<"Length of third string :"<<length3<<"\n"<<endl;

    // concentation operation
    cout<<"Concatenation operation...."<<endl;
    string res=str1 +" "+str3;
    cout<<"RESULT IS : "<<res<<"\n";
    string res1=str2+" "+str3;
    cout<<"RESULT IS : "<<res1<<"\n";
    cout<<endl;

    //compare operation
	cout<<"Compare Operation...."<<endl;
	int result=str1.compare(str2);
	if(result==0){
		cout<<"String are equal."<<endl;
	}
	else{
		cout<<"String are not equal\n"<<endl;
	}
	cout<<endl;

    //Erase operation of string
    cout<<"Erase operation of string..."<<endl;
    str1.erase(3,1);
    cout<<str1<<endl;
    cout<<endl;
    // Insert operation of string
    cout<<"Insert operation of string...."<<endl;
    str1.insert(3,1,'a');
    cout<<str1<<endl;
    cout<<endl;
    // replace function 
	cout<<"Replace string .........\n"<<endl;
	cout<<"String  is :"<<str4<<"\n"<<endl;
	cout<<"After replace string is :\n"<<str4.replace(12,9," Information Technology")<<endl;
    return 0;
}