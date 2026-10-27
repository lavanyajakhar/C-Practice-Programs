//creating constant member function

// #include<iostream>
// using namespace std;

// class student
// {
//     private:
//     string name;

//     public:
//     student(string n): name (n)
//     {}
//     void display() const
//     {
//         //name = "Manav";   modification not allowed
//         cout<<"The name is "<<name<<endl;
//     }

// };

// int main()
// {
//     student s("Lavanya");
//     s.display();
// }



//both data member and constant function are constant

#include<iostream>
using namespace std;

class student
{
    private:
    const int age;
    string name;

    public:
    student(int a, string n): name(n), age(a)
    {}

    void display() const
    {
        cout<<"The age of "<<name<<" is "<<age<<endl;
    }
};

int main()
{
    student s(19,"Lavanya");
    s.display();
}