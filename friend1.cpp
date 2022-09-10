#include<iostream>
using namespace std;

//neked function can be friend 
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
    friend void fun();  //no memeber of class
};
void fun()  //this pointer allow(define)
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    cout<<obj.k<<endl;
}
//neked function
int main()
{
    fun();  //call(declare)
    return 0;

}