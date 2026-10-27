//USE OF PURE VIRTUAL FUNCTION
// #include<iostream>
// using namespace std;

// class animal
// {
//     public:
//     void sound()
//     {
//         cout<<"This is the universal sound."<<endl;
//     }
//     virtual void eat()=0;
// };

// class cat : public animal
// {
//     public:
//     void eat()
//     {
//         cout<<"The cat eats fish."<<endl;
//     }

// };

// int main()
// {
//     cat c;
//     //c.eat();
//     //c.sound();           //conventional method to access virtual function
//     animal *ptr;
//     ptr = &c;
//     ptr->eat();
//     ptr->sound();          //without direct accessing 
// }




#include<iostream>
using namespace std;

class student
{
    protected:
    int age;
    string name;
    public:
    student(int a, string n)
    {
        age= a;
        name=n;
    }
    virtual void show()=0;
};

class child : public student
{
    public:
    child(int a, string n) : student(a, n)
    {
    }
    void show()
    {
        cout<<"The name is "<<name<<" and the age is "<<age<<endl;
    }

};

int main()
{
    child c(19,"Lavanya");
    student *s = &c;
    s->show();
}



