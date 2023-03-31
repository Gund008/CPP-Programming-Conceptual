
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Demo
{
    int m_iNo1;
    int m_iNo2;
    public:

    Demo()    //Default Constructor
    {
       m_iNo1=0;
       m_iNo2=0;
    }
};

//Client                                                                                                                                               
//Demo dobj;

//Internally
Demo(Demo *const this)
{
    this->m_iNo1=0;
    this->m_iNo2=0;
}

//memory
//Demo.obj();
//Demo(&obj);

//////////////////////////////////////////////////////////////////////////////////////////////

 void Display()  //Function
    {
        cout<<iNo1 is:<<m_iNo1<<endl;
        cout<<iNo1 is:<<m_iNo2<<endl;
    }

//Client
//dobj.Display();

//Internally
void Display(Demo *const this)
{
    cout<<iNo1 is:<<this->m_iNo1<<endl;
    cout<<iNo1 is:<<this->m_iNo2<<endl;
}

//Display(&obj);

//////////////////////////////////////////////////////////////////////////////////////////////

 Demo(int iParam)  //Parameterised Constructor
    {
       m_iNo1=iParam;
    }
//Client
//Demo dobj(10);


//Internally
Demo(Demo *const this,int iParam)
{
    this->m_iNo1=iParam;
}

//memory
//Demo.obj();
//Demo(&obj,10);

////////////////////////////////////////////////////////////////////////////////////////////

void fun(int iParam1,int iParam2)    //Function Arguments
    {
       m_iNo1=m_iNo1+iParam1;
       m_iNo2=m_iNo2+iParam2;
    }
//Client
//dobj.fun(10,20);

//Internally
void fun(Demo *const this,int iParam1,int iParam2)
{
    this->m_iNo1=this->m_iNo1+iParam1;
    this->m_iNo2=this->m_iNo2+iParam2;
}

//fun(&obj,10,20);

////////////////////////////////////////////////////////////////////////////////////////////

Demo(Demo &refobj,int iParam)   //Reference
    {
        m_iNo1=refobj.m_iNo1 + iParam;
        m_iNo2=refobj.m_iNo2 + iParam;
    }
//Client
//Demo dobj2(dobj1,40);

//Internally
Demo(Demo *const this,demo &refobj,int iParam)
{
    this->m_iNo1=refobj.m_iNo1 + iParam;
    this->m_iNo2=refobj.m_iNo2 + iParam;
}

//Memory
//obj2.demo(obj1,40);
//Demo(&obj2,obj1,40);

////////////////////////////////////////////////////////////////////////////////////////////

 demo(demo &refobj,int iNo1)
    {
        iNo1=refobj.iNo1 + iNo1;
        iNo2=refobj.iNo2 + iNo2;
    }
//Client
//Demo dobj2(dobj1,40);

//compiler(pop)
//Internally
demo(demo *const this,demo &refobj,int iNo1)
{
    m_iNo1=refobj.m_iNo1 + iNo1
    this->iNo2=refobj.m_iNo2 + m_iNo2;
}

//Memory
//obj2.demo(obj1,40);
//internally
//demo(&obj2,obj1,40);

///////////////////////////////////////////////////////////////////////////////////////////






   
