#include<iostream>
using namespace std;

class Demo
{
    public:
    int i,j;

    void gun()    //defination
    {
        cout<<"Inside gun\n";
    }
    void fun()   //overload finction
    {
        cout<<"Inside fun\n";
    }
    void fun()  //overload function defination
    {
        cout<<"Inside fun\n";
    }
};

int main()
{
    return 0;
    
}