#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:   //protected Access specifier immegitely Access derived class
        int k;
};
class Hello : public Demo
{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
    public:
    void  fun()
    {
        cout<<k<<endl;
    } 
};


//os start(neked function)
int main()
{
    cout<<sizeof(Demo)<<"\n";  //12
    cout<<sizeof(Hello)<<"\n";  //24

    Demo obj1;
    cout<<obj1.i<<endl;
    //cout<<obj1.j<<endl;
    //cout<<obj1.k<<endl;

    Hello obj2;
    cout<<obj2.i<<endl;
    cout<<obj2.x<<endl;
    //cout<<obj2.y<<endl;
    //cout<<obj2.z<<endl;

    obj2.fun();
    return 0;

}