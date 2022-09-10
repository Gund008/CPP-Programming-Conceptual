#include<iostream>
using namespace std;
//dukan
int Area(float fRadius,float PI=3.14)
{
    float fAns=0.0;
    fAns=PI*fRadius*fRadius;
    return fAns;
}

//ghar
int main()
{
    float fret=0.0;

    fret=Area(10.4,7.2);
    cout<<fret<<endl;

    fret=Area(10.6);  //call
    cout<<free<<endl;
    return 0;

}