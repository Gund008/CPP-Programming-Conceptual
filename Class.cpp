#include<iostream>
using namespace std;

class Person
{
    char name[30];
    int age;

    public:
        void getdata();
        void display();
};

void Person::getdata()
{
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter age:"<<endl;
    cin>>age;
}
void Person::display()
{
    cout<<"\nName:"<<name;
    cout<<"\nAge:"<<age;
}

int main()
{
    Person p;
    p.getdata();
    p.display();
    return 0;

}