//use of constant in inheritance
#include<iostream>
using namespace std;

class student
{
    private:
    const int age;

    public:
    student(int a) : age(a)
    {}

    void display()
    {
        cout<<"Age : "<<age<<endl;
    }
};

class teacher: public student
{
    private:
    const string name;

    public:
    teacher(string n, int a):name(n), student(a)
    {}

    void show()
    {
        cout<<"Name :"<<name<<endl;
    }
};

int main()
{
    teacher t("Lavanya",20);
    t.show();
    t.display();

    teacher *ptr;          //with pointer
    ptr= &t;
    ptr->display();
    ptr->show();
}
