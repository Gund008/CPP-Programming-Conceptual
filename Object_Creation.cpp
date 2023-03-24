#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Demo
{
    int iNo;

    public:
    Demo()
    {
        iNo=0;
    }
    void fun()
    {
        cout<<"Marvellous Infosystem"<<endl;
    }
};

Demo dobj;   //Global Object

int main()
{
    Demo dobj;  //Local Object

    ::dobj.fun();

    return 0;
} 
