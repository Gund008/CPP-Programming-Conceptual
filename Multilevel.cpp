#include<iostream>
using namespace std;

class Base
{
   public:
     int i,j;
     Base()
     {
        cout<<"Base constructor\n";
     }
     ~Base()
     {
        cout<<"Base constructor\n";
     }
     void fun()
     {
        cout<<"Inside fun"<<"\n";
     }
};

class Derived:public Base
{
    public:
     int a,b,c;
     Derived()
     {
        cout<<"Derived constructor\n";
     }
     ~Derived()
     {
        cout<<"Derived destructor\n";
     }

};
class Derived1:private Derived
{
    public:
     int k,l;
     Derived1()
     {
        cout<<"Derived1 constructor\n";
     }
     ~Derived1()
     {
        cout<<"Derived1 destructor\n";
     }
};

int main()
{
    
     Derived1 obj3;
   
    //creating object explicitely call by constrcutor

    return 0;
}

/*
Base
|
Derived
|
Derived1
*/