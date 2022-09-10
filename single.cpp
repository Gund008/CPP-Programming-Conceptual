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
        cout<<"Base destructor\n";
    }
};

class Derived:public Base
{
     public:
     int a,b,c;
     Derived()
     {
        cout<<"Inside constructor\n";
     }
     ~Derived()
     {
        cout<<"Inside destructor\n";
     }
};

int main()
{
    Derived obj;
    return 0;

}