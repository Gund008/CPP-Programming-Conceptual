#include<iostream>
using namespace std;

class Demo
{
public:
//Addtion@2ii(name manling)
    int Addtion(int ino1,int ino2) //function
    {
        int ans=0;
        ans=ino1+ino2;
        return ans;
    }
//Addtion@3ii    
    int Addtion(int ino1,int ino2,int ino3)
    {
        int ans=0;
        ans=ino1+ino2+ino3;
        return ans;
    }
 //Addtion@4ii   
    int Addtion(int ino1,int ino2,int ino3,int ino4)
    {
        int ans=0;
        ans=ino1+ino2+ino3+ino4;
        return ans;
    }
};

int main()
{
    Demo  obj;
    int iret=0;

    //PUSH 10
    //PUSH 11
    //CALL 1000
   iret= obj.Addtion(10,11);
   //obj.Addtion@2ii(10,11)
   cout<<iret<<endl;

   //PUSH 10
   //PUSH 11
   //PUSH 12
   //CALL 2000
   iret=obj.Addtion(10,11,12);
   //obj.Addtion@3ii(10,11,12)
   cout<<iret<<endl;

   //PUSH 10
   //PUSH 11
   //PUSH 12
   //PUSH 13
   //CALL 3000
   iret=obj.Addtion(10,11,12,13);
   //obj.Addtion@4ii(10,11,12,13)
   cout<<iret<<endl;
    return 0;
}


/*
Allowed
//changing number of arguments
void fun(int,int);
void fun(int,int,int);

//changing datatype  of Arguments
void fun(int ,int);
void fun(double,double);

//changing sequence of argument
void fun(char,int ,float);
void fun(int,float,char);

//not allow
 //changing return value
 int fun();
 float fun();
 */
 

