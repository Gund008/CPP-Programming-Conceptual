#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Input
{
    public:
        int x;
        int y;
        int z;
        Input()
        {
            cout<<"Enter first number:\n";
            cin>>x;
            cout<<"Enter Second number:\n";
            cin>>y;
            z=x+y;
        }
};

class Output : public Input
{
    public:
        Output()
        {
            cout<<"Your  answer is:"<<z;
        }
};

int main()
{
    Output obj;
    return 0;
}