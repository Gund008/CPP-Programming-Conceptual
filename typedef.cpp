#include<iostream>
using namespace std;

#define MAX 10

int main()
{
    typedef int NUMBER;
    typedef char LETTER;

    NUMBER no=11;
    LETTER ch='M';
   
    cout<<sizeof(no)<<"\n";  //4
    cout<<no<<"\n";      //11

    cout<<sizeof(ch)<<"\n";   //1
    cout<<ch<<"\n"; //M

    typedef const int *CPTR;
    //const int *p=NULL;

    CPTR p=&no;
    cout<<*P<<endl;
    return 0;

}