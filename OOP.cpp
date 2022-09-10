#include<iostream>
using namespace std;

class Airthematic
{
    public:
    int iNo1;  //chracteristics
    int iNo2;

    Airthematic()  //default constructor
    {
        cout<<"Inside default constructor\n";
        iNo1=0;
        iNo2=0;
    }

    Airthematic(int A,int B)  //parameterised
    {
        cout<<"Inside parameteried constructor\n";
        iNo1=A;
        iNo2=B;
    }

    ~Airthematic()    //destructor
    {
        cout<<"Inside destructor\n";
    }

    int Addition(int iNo1, int iNo2)
    {
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;
    }

    int Substraction(int iNo1,int iNo2)
    {
        int iAns=0;
        iAns=iNo1-iNo2;
        return iAns;
    }
};

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ret=0;

   Airthematic obj1;
    Airthematic obj2(ivalue1,ivalue2);
    cout<<"Enter first number:"<<endl;
    cin>>ivalue1;

    cout<<"Enter second number:"<<endl;
    cin>>ivalue2;

    ret=obj2.Addition(ivalue1,ivalue2);
    cout<<"Addtion is:"<<ret<<endl;
    
    ret=obj2.Substraction(ivalue1,ivalue2);
    cout<<"Substraction is:"<<ret<<endl;
    
    return 0;

}