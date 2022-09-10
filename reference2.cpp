#include<iostream>
using namespace std;

int main()
{
    int no=11;
    int &x=no;
    int &y=no;

    printf("%d\n",no);
     printf("%d\n",x);
     printf("%d\n",y);
    


    return 0;
}