#include<iostream>
using namespace std;

/*
   class Demo
   {
    public:
    int x;
    private:
    int y;
    protected:
    int z;
   };

    class Derived:public Demo  
    {
        void fun()
        {
              x=10;   //A
              y=20;   //NA
              z=30;   //A
        }   
    };

int main()   //neked Function
{
    Derived dobj;
    cout<<dobj.x<<endl;   //A
    cout<<dobj.y<<endl;  //NA
    cout<<dobj.z<<endl;  //NA
    return 0;
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////
 class Demo
   {
    public:
    int x;
    private:
    int y;
    protected:
    int z;
   };

    class Derived:private Demo  
    {
        void fun()
        {
              x=10;   //A
              y=20;   //NA
              z=30;   //A
        }   
    };

int main()   //neked Function
{
    Derived dobj;
    cout<<dobj.x<<endl;   //NA
    cout<<dobj.y<<endl;  //NA
    cout<<dobj.z<<endl;  //NA
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
 class Demo
   {
    public:
    int x;
    private:
    int y;
    protected:
    int z;
   };

    class Derived:protected Demo  
    {
        void fun()
        {
              x=10;   //A
              y=20;   //NA
              z=30;   //A
        }   
    };

int main()   //neked Function
{
    Derived dobj;
    cout<<dobj.x<<endl;   //NA
    cout<<dobj.y<<endl;  //NA
    cout<<dobj.z<<endl;  //NA
    return 0;
}