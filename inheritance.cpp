#include<iostream>
using namespace std;


///////////////////////////////////////////////////////////
class Demo
{
    public:
    int Add(int ino1,int ino2)
    {
        int ans=0;
        ans=ino1+ino2;
        return ans;
    }
};
///////////////////////////////////////////////////////////
int main()
{
    Demo obj;
    int ret=0;
    
    cout<<sizeof(obj)<<"\n";
    ret=obj.Add(10,11); //function call
    cout<<ret<<"\n";

    return 0;
}