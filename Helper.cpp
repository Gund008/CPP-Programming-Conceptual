#include"Header.h"
using std::cout;
using std::cin;

//Excution Start Program
int main()
{
    int A=0;
    int B=0;

    cout<<"Please Enter the First Number:\n";
    cin>>A;

    cout<<"Please Enter the First Number:\n";
    cin>>B;

    int iRet=Marvellous::Addition(A,B); //call
    printf("Addition is:%d\n",iRet);
  
    return 0;

}