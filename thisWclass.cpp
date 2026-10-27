//this with class
#include<iostream>
using namespace std;

class parent //declaring parent class
{
    private:
    int rollno=10;

    public:
    void get(int rollno)
    {
        this->rollno=rollno;
        cout<<"(Local data)The roll no is: "<<rollno<<endl;
    }

    void set()
    {
        cout<<"Global data)the roll no is :"<<rollno<<endl;
    }
    
    parent(int rollno)
    {
        this->rollno=rollno;
        cout<<"the roll no is :"<<this->rollno<<endl;
    }
};

class child : public parent //declaring child class
{
    
    public:
    child() : parent(30)
    {

    }; 
    int rollno=20;
    public:
    void display()
    {
        cout<<"the roll no is :"<<rollno<<endl;
    }

};

int main()
{
    child c;
    c.get(10);
    c.set();
    c.display();
}