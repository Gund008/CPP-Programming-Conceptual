#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Demo
{
    int m_iNo1;
    int m_iNo2;
    int m_iNo3;

public:
   Demo(int iParam):m_iNo2(++iParam),m_iNo3(++iParam),m_iNo1(++iParam)  //Preincrement
   {
     
   }
   void Display()
   {
      cout<<"iNo1 is:"<<m_iNo1<<endl;  //11
      cout<<"iNo2 is:"<<m_iNo2<<endl;  //12
      cout<<"iNo3 is:"<<m_iNo3<<endl;  //13
   }

};

//Memory
//dobj.Demo()
//dobj.Display()

int main(void)
{
    Demo dobj(10);
    dobj.Display();

    return 0;
}