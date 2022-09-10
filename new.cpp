#include<iostream>
using namespace std;

int main()
{
    int Arr[5];

    int *p=NULL;

    //p=(int*)malloc(sizeof(int)*5)
    //new oprator used automatically typcasting in c++

    p=new int[5];

    if(p==NULL)
    {
        cout<<"unable to allocate the memeory"<<endl;
    }
    else
    {
        cout<<"unable to allocated succesfully at address:"<<p<<endl;
    }

    //free(p);
    
    delete[]p;

    return 0;
}
