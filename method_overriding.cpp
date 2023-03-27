#include<iostream>
#include<stdio.h>
using namespace std;

class C1 {

  public:
 void something(){


    cout<<"something method of c1";
 }




};


class C2 : private C1
{  
    public:
     void something(){
    cout<<"something method of c2";
 }
};


int main()
{


         C2 obj;
         obj.something();

    
    return 0;

}