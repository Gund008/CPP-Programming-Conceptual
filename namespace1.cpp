#include<iostream>
//using namespace std;(cout,cin)

namespace Marvellous
{
    void fun()
    {
        std::cout<<"Inside fun\n";
    }
}

int main()
{
    std::cout<<"Jay ganesh\n";

    using namespace Marvellous;
    fun();

    return 0;

}