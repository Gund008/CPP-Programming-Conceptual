#include<iostream>
using namespace std;


class Demo
{
    public:
    int x;   //chracteristics
    int y;

    Demo()
    {
       cout<<"Inside constructor\n";
    }
    ~Demo()
    {
       cout<<"Inside destructor\n";
    }
    void fun()   //method
    {
        cout<<"Inside fun\n";
    }
};

int main()
{
    Demo obj; //static object creation

    Demo *ptr=NULL;

    ptr=new Demo;  //dynamic object creation

    obj.fun();   //direct accessing oprator

    ptr->fun();  //indirect accessing oprator

    delete ptr;

     return 0;
     
}