#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;  //chractristis
    int y;

    Demo()  //default
    {
        cout<<"Inside Default constructor\n";
        x=0;
        y=0;
    }
    Demo(int i,int j) //parameterised
    {
        cout<<"Inside Parameterised constructor\n";
        x=i;
        y=j;
    }
    Demo(Demo &ref)  //copy constructor
    {
        cout<<"Inside copy constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";
    }
};


int main()
{
    Demo obj1(11,21);  //inside (x,y)
    Demo obj2(51,101); //inside(x,y)

    cout<<sizeof(obj1)<<"\n";  //8
    cout<<sizeof(obj2)<<"\n";   //8

    cout<<"Value of x in obj1:"<<obj1.x<<"\n"; //11
    cout<<"Value of x in obj2:"<<obj2.x<<"\n";  //51

    cout<<"Value of x in  obj1:"<<obj1.x<<endl;  //11
    cout<<"Value of x in obj2:"<<obj2.x<<endl;   //51

    return 0;

}