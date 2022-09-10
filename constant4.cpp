#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    const int j;

    Demo(int a,int b):j(b)
    {
        i=a;
    }
    void fun()
    {
        cout<<"Inside fun\n";
        //i++;
        j++;
    }
/////////////////////////////////////////// 
//constatnt method   
    void gun(int a,const int b) //define
    {
         int x=10;
         const int y=20;

         cout<<"Inside gun"<<endl;
         //i++;
         //j++;

         x++;
        // y++;

         a++;
         //b++;
    }
};


int main()
{
    Demo obj1(11,21);
    obj1.fun();
    cout<<obj1.i<<endl;
    obj1.gun(10,20);

    const Demo obj2(11,21);  //call declare 
     obj2.fun();
     obj2.gun(10,20);

    return 0;

}