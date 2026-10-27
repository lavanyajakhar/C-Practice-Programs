#include<iostream>
using namespace std;

class super
{
    public:
    virtual void show() = 0; //pure virtual function
};

class child : public super
{
    public:
    void show() override
    {
        cout<<"I am child class."<<endl;
    }
};

int main()
{
    child c;
    //c.show();

    super *s;
    s = &c;     //method to access abstract class NOT through object but POINTER VARIABLE
    s->show();
}


