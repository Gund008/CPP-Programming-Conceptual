#include<iostream>
using namespace std;

class Demo
{
    public:  //private
    int x;
    int y;
    Demo(int i=10,int j=20)  //default value with paramertrised constructor
    {
        x=i;
        y=j;
    }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    if(obj1==obj2)
    {
        cout<<"Object are same\n";
    }
    else
    {
        cout<<"Object are diffrent\n";
    }
    return 0;
}