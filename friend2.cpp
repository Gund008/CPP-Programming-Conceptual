#include<iostream>
using namespace std;

//class member can be friend
class Hello
{
    public:
    void fun();  //declaration
};
///////////////////////////////////////////////////
class Demo
{
    public:
    int i;
    protected:
    int j;
    private:
    int k;

    public:
    Demo()   //default constructor
    {
        i=10;
        j=20;
        k=30;
    }
    friend void Hello::fun();
};

void Hello::fun()  //defination
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    cout<<obj.k<<endl;
}
int main()
{
   Hello hobj;
   hobj.fun();
    return 0;

}