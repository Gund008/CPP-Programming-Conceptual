#include<iostream>
using namespace std;


//class Design

class Demo  //parent (class 1)
{
    public:
    int x,y;
};

    class derived:public Demo  //child(class 2)
    {
        public:
        int i,j;
    };

//////////////////////////////////////////////////////
int  main()
{
   Demo *bp=new Demo();  //no casting
   derived *dp=new derived();  //no casting

   Demo *bp1=new derived(); //upcasting
   //derived *dp1=new Demo(); //downcasting
  //new keyword used dynamically memory allocated
    return 0;

}