#include<iostream>
using namespace std;

//function calling technique,way

int callValue(int no)
{
    no++;   //11
}
int callAddress(int *p)
{
   (*p)++;
}
int callReference(int &d)
{
   d++;
}
//os start run main method
int main()
{
    int a=10,b=10,c=10;
 
    callValue(a);
    cout<<a<<endl;

    callAddress(&b);
    cout<<b<<endl;

    callReference(c);
    cout<<c<<endl;

    return 0;

}
