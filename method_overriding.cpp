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
         C1 obj2;
         obj2.something();
         obj.something();
         
     
    
    return 0;

}