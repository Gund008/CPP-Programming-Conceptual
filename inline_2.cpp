#include<iostream>
using namespace std;

class Demo
{
    public:
    int add(int no1,int no2);  //function decl
    int sub(int no1,int no2);
};
/////////////////////////////////////////////////////////
int  Demo::add(int no1,int no2)
{
  int ans=0;
  ans=no1+no2;
  return ans;
}
int Demo::sub(int no1,int no2)
{
  int ans=0;
  ans=no1-no2;
  return ans;

}

int main()
{
    Demo obj;
    cout<<sizeof(Demo)<<endl;
    int iret=0;
    int ino1=2;
    int ino2=1;
    
    iret=obj.add(ino1,ino2);
    cout<<iret<<endl;

    iret=obj.sub(ino1,ino2);
    cout<<iret<<endl;

}
