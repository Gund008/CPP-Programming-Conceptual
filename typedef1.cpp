#include<iostream>
using namespace std;

//os start run
int main()
{
    struct Demo
    {
        int no1;
        int no2;
    };
    typedef struct Demo DEMO;
    typedef struct Demo * PDEMO;
    typedef struct Demo ** PPDEMO;
////////////////////////////////////////////////////////////
    typedef struct Demo
    {
        int no1;
        int no2;
    }DEMO,*PDEMO,**PPDEMO;

////////////////////////////////////////////////////////////
    //struct Demo obj;
    DEMO obj;

   //struct Demo *PDEMO
   PDEMO p=&obj;

   //struct Demo **PPDEMO
   PPDEMO q=&p;

    return 0;
}

typedef Existing _Data_type new_name

typedef int NUMBER;
typedef char LETTER;
typedef float DECIMAL;
typedef int  *IPTR;
typedef char **PPCHAR;
typedef const int *const CIPTRC;
