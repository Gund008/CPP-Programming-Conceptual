#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
};

class Hello:public Demo
{
    public:
    int x;
    private:
    int y;
    protected:
    int z;
    
    public:
   void fun()
   {
    cout<<"Inside fun"<<endl;
   }
};

int main()
{
    Hello obj1;
    cout<<obj1.i<<endl;
   // cout<<obj1.j<<endl; private
    //cout<<obj1.k<<endl; protected

    Hello obj2;
    cout<<obj2.x<<endl;
    obj2.fun();
    //cout<<obj2.y<<endl; private
    //cout<<obj2.z<<endl; protected

    return 0;

}