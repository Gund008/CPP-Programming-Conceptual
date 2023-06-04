#include<iostream>
using namespace std; 

class Demo
{
    public:
    int i;
    const int j;   //constatnt varaible

    Demo():j(20)
    {
      i=10;
      //j=20;
    }  
};

int main()
{
   Demo obj(11,21);
   cout<<obj.i<<endl;
   cout<<obj.j<<endl;
    return 0;

}
