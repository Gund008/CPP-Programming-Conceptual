#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Demo
{
    const int m_iNo1;  //Constant Member function
    int m_iNo2;

public:
    Demo():m_iNo1(10),m_iNo2(20)  //Performance Increment(member Intialisation list)
    {

    }
    void Display()
    {
        cout<<m_iNo1<<endl;
        cout<<m_iNo2<<endl;
    }
    void fun1()
    {
        //m_iNo1=30;     Constant data member
        m_iNo2=40;
    }
    void fun2()const
    {
        //m_iNo1=50;     Constant  member Function
        //m_iNo2=60;     Constant  member Function
    }
    void fun3(Demo *const pptr)const
    {
        //Display();
        //m_iNo1=70;
        //m_iNo2=80;
        //this->m_iNo1=90;
        //this->m_iNo2=100;
        //pptr->m_iNo1=110;
        pptr->m_iNo2=120;
    }
};

int main(void)
{
    Demo dobj;

    dobj.fun1();
    dobj.Display();
    dobj.fun2();
    dobj.Display();
    //dobj.fun3(&obj);
    return 0;
}




