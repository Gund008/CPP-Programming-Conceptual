#include<iostream>
using namespace std;
//defination
int Addition(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
}
int Substraction(int iNo1, int iNo2)
{
    int iRet=0;
    iRet=iNo1-iNo2;
    return iRet;
}

////////////////////////////////////////////////////////
//os start main function
int main()
{
     int iValue1=0;
     int iValue2=0;
     int iRet=0;

     printf("Enter first number:\n");
     scanf("%d",&iValue1);

     printf("Enter second number:\n");
     scanf("%d",&iValue2);

     iRet=Addition(iValue1,iValue2);  //function declaration
     printf("Addtion is:%d\n",iRet);

     iRet=Substraction(iValue1,iValue2);
     printf("substraction is:%d\n",iRet);
    return 0;

}