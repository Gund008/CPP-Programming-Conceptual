#include<iostream>
using namespace std;

//hole class can be friend
class Hello
{
    public:
    void fun();
    void gun();   //declaration
};

class Demo
{
    public:
    int i;
    protected:
    int j;
    private:
    int k;

   public:
   Demo()
   {
     i=10;
     j=20;
     k=30;
   }
   //friend void Hello::fun();
   //friend void Hello::gun();
   friend class Hello;

};
//defination
void Hello::fun()
{
Demo obj1;
    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";
    cout<<obj1.k<<"\n";
}
void Hello::gun()
{
Demo obj1;
    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";
    cout<<obj1.k<<"\n";
}
int main()
{
    Hello obj;
    obj.fun();
    obj.gun();
    return 0;

}
