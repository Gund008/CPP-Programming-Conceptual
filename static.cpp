#include<iostream>
using namespace std;

class Demo
{
    public:
    int i,j;  //instance varaible(nonstatic)
    static int x;  //class varaible(static)

Demo(int a=10,int b=20)
{
   cout<<"Inside constructor\n";

   this->i=a;
   this->j=b;
}


//nonstatic function can Access static as well as nonstatic characteristics
//void fun(Demo *this,int no)
void fun(int no)
{
    cout<<"Inside non static fun\n";
    cout<<this->i<<"\n";
    cout<<this->j<<"\n";
}
//static function can access only static characteritics
//static void fun(int value)
static void gun(int value)
{
    cout<<"Inside static gun\n";
}
};


int Demo::x=30;  //static variable initialised

int main()
{
    cout<<Demo::x<<"\n";
    Demo::gun(11);

    return 0;

}

