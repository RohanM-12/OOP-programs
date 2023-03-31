#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout<<"Enter the number of student"<<endl;
	int n; 
	cin>>n;
	string name[5];
	int id[5];
	string branch[5];
	int a[5],b[5],c[5],d[5],e[5];
	float avg[5];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter ID of : "<<i+1<<"th "<<"Student"<<endl;
		cin>>id[i];
		cin.ignore();
		cout<<"Enter name of student : "<<endl;
		getline(cin,name[i]);
		cout<<"Enter the Branch : "<<endl;
		// cin>>branch[i];
		getline(cin,branch[i]);
		cout<<"Enter the marks :"<<endl;
		cin>>a[i];
		cin>>b[i];cin>>c[i];cin>>d[i];cin>>e[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout << "---------------- DETAILS OF "<<i<<" STUDENT  -----------------\n"<< endl;
        cout << "ID              : "<< id[i] << endl;
		cout << "Name of student : "<< name[i] << endl;
        cout << "Branch          : "<< branch[i] << endl;
        cout<<"Marks Obtained    : " ;
		cout<<  a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<" "<<e[i]<<endl;
		avg[i]=(a[i]+b[i]+c[i]+d[i]+e[i])/5.00;
		cout << "Average         : " << avg[i]<< " % \n " << endl;
    }
	    
		cout << "-----------------------------------------------------\n"<< endl;
    
	    return 0;
}
	
