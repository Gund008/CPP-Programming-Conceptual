#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    //1000
    void fun()    //concreate non virtual
    {
        cout<<"Base fun\n";
    }
    //2000
    virtual void gun()  //concrete virtual
    {
        cout<<"Base gun/n";
    }
    //3000
    virtual void sun()   //concreate virtual
    {
        cout<<"Base sun\n";
    }

    //
    virtual void run()=0;  //abstract function
};

class Derived:public Base
{
    public:
    int i,j;

    //4000
    void fun()  //Redefination(concrete)function
    {
        cout<<"Derived fun\n";
    }

    //5000
    virtual void gun()
    {
        cout<<"Derived gun\n";
    }
    //6000
    void run()
    {
        cout<<"Inside run\n";
    }
};

int main()
{
   // Base bobj;     //not Allowed
    Derived dobj; //Allowed
   
   Base *bp=NULL;
   bp=&dobj;

   cout<<sizeof(Base)<<"\n";
   cout<<sizeof(Derived)<<"\n";

   bp->fun();  //base fun
   bp->gun();  //derived gun
   bp->sun();  //base sun
   bp->run();  //Derived run

    return 0;

}
