#include <iostream>
//#include<string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Records
{
	public :
    string student_name="";
	int marks=0 ;
	string dob="";
	int roll=0;
	
	void set_info()
	{
	  cout<<"enter your name :"<<endl;
	  cin>>student_name;
	  cout<<"enter your marks :"<<endl;
	  cin>>marks;
	   cout<<"enter your roll no :"<<endl;
	  cin>>roll;
	   cout<<"enter your date of birth :"<<endl;
	  cin>>dob;
	  
	}
	void display_info()
	{
			cout<<"-----------------------\n";
	   cout<<"name : "<<student_name<<endl;
	   cout<<"marks : "<<marks<<endl;
	   cout<<"Date of birth : "<<dob<<endl;
	   cout<<"Roll no : "<<roll<<endl;
	   
	}

};





int main() {
	
	int result=0;
	int n=3;
    Records arr[10];
    for(int i=0;i<n;i++)
	{
		cout<<"-----------------------\n";
			Records obj;
		
			obj.set_info();

				arr[i]=obj;
	}
	for(int i=0;i<n;i++)
	{
	  result+=arr[i].marks;
	  
	}
	for(int i=0;i<n;i++)
	{
	  arr[i].display_info();
	  
	}
	cout<<"average :"<<result/n<<endl;
	
	
}
