#include<iostream>
using std::cout;
using std::cin;
using std::endl;

/*
#pragma pack(1)

struct Student
{
    int iNo;
    char ch;
};

int main()
{
    struct Student sobj;
    printf("size of %d\n",sizeof(sobj));
    return 0;
}
*/


#pragma pack(1)
class Demo
{
    int iNo;
    int *Arr;
    char ch;

};
int main()
{
    Demo dobj;
    cout<<sizeof(dobj)<<endl;
    return 0;
}

