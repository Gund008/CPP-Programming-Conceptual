#include<iostream>

class Demo
{
    public:
    int i,j;
    static int x;

    Demo()
    {
        cout<<"Inside default constructor\n";
    }
};

int Demo::x=30;

int main()
{
    cout<<Demo::x<<"\n"; //no object creation
    return 0;

}
