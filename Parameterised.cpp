#include<iostream>

using std::cout;
using std::cin;

class Base
{
  public:
   Base()
   {
     cout<<"In Base Constructor:\n";
   }
   Base(int iParam)
   {
      cout<<"In Parameterised  Base Consructor:\n";
   }

};

class Derived:public Base
{
    public:
    Derived()
    {
      cout<<"Default Derived:\n";
    }
    Derived(int iNo):Base(iNo)
    {
       //Base()
       cout<<"In Parameterised  Derived Constructor:\n";
    }

};

int main()
{  
  Derived dobj(10);
  return 0;
}