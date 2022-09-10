#include<stdio.h>
#include<stdlib.h>

int arr[4]={10,20,30,40};  //Array

int no;   //variable

int main()
{
    int brr[3]={11,21,51}; //auto

    register int x=15;  //register

    int *p=NULL;

    static int value=21;  //static local
   
    p=(int*)malloc(sizeof(int)*3); //dynamic memory

    printf("Jay ganesh");

    return 0;

}

