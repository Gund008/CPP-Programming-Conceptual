#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo(int a=10,int b=20)  //parametrised with default
    {
        x=a;
        y=b;
    }
};

int main()
{
    Demo obj1;
    cout<<obj1.x<<endl;  //10
    cout<<obj1.y<<endl; //20

    Demo obj2(11);
    cout<<obj2.x<<endl;  //11
    cout<<obj2.y<<endl;   //20

    Demo obj3(1,2);
    cout<<obj3.x<<endl; //1
    cout<<obj3.y<<endl;//2

}