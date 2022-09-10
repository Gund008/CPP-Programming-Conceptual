#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"Inside fun Marvellous\n";
    }
}

namespace Infosystems
{
    void fun()
    {
        std::cout<<"Inside fun Infosystems\n";
    }
}

int main()
{
    std::cout<<"Gay ganesh\n";

    using namespace Marvellous;
    using namespace Infosystems;

    //fun();  //ambiguity

    Infosystems::fun();
    Marvellous::fun();
    
    return 0;

}