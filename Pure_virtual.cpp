#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    int Add(int a,int b)  //function
    {
        return a+b;
    }
    virtual int sub(int a,int b)=0;
};

class Derived:public Base
{
    int sub(int a,int b)
    {
        return a-b;
    }
    int mult(int a,int b)
    {
        return a*b;
    }
};

int main()
{
    Base *bp=new Derived();
    int ret=0;

    ret=bp->Add(11,10);   //call byvalue
    cout<<ret<<"\n";

    ret=bp->sub(11,10);
    cout<<ret<<"\n";

    //ret=bp->Mult(11,10);
    //cout<<ret<<"\n";

    return 0;

}
