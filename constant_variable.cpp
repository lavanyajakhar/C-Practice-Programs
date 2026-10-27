// //CONSTANT variable or Data member
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a =4;
//     cout<<"The value of a : "<<a<<endl;
//     a=5;
//     cout<<"The value of a : "<<a<<endl;

//     const int b = 6;
//     cout<<"The value of b : "<<b<<endl;
//     //b=7;   b cannot be modified
// }


//use of constant data member in class

#include<iostream>
using namespace std;

class student
{
    private :
    const int age;
    public:
    student(int a): age(a)      //we have to initialize variable here when it is constant    
    {
        
    }

    void show()
    {
        cout<<"The age is : "<<age<<endl;
    }
};

int main()
{
    student s(15);
    s.show();

}