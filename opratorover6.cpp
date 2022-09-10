#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo(int i=0,int j=0)
    {
        x=i;
        y=j;
    }
};

Demo operator ++(Demo &op)
{
    op.x++;
    op.y++;
    return op;
}

Demo operator ++(Demo &op,int)
{
    op.x++;
    op.y++;
    return Demo(op.x-1,op.y-1);
}

int main()
{
    Demo obj1(10,20);
    Demo obj2(10,20);

    Demo  robj1(0,0);
    Demo robj2(0,0);

    robj2=obj1++;
    cout<<obj1.x<<" "<<obj1.y<<"\n";
    cout<<obj1.y<<" "<<robj1.y<<"\n";

    robj2=obj2++;
    cout<<obj2.x<<" "<<obj2.y<<"\n";
    cout<<obj2.x<<" "<<robj2.y<<"\n";
    
    return 0;

}