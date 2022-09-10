#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo(int a=10,int b=20)
    {
        x=a;
        y=b;
    }

    //instance variable(nonstatic variable,function apply)
    void fun(int no)
    {
        cout<<"Inside fun\n";
    }
};

int main()
{
    Demo obj(11,22);
    obj.fun(51);
    return 0;
    
}