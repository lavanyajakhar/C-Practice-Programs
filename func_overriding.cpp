// #include<iostream>
// using namespace std;

// class animal
// {
//     public:
//     virtual void sound()  //super class method
//     {
//         cout<<"Every animal has sound"<<endl;
//     }

// };

// class cat : public animal
// {
//     public:
//     void sound() override
//     {
//         cout<<"The cat MEOWS."<<endl;
//     }
// };

// int main()
// {
//     cat c1;
//     c1.sound();

//     //animal A;
//     //A.sound();

//     cat c2;
//     c2.animal::sound();  //access through resolution operator
// }


#include<iostream>
using namespace std;

class abc
{
    int a,b;
    public:
    virtual void show()
    {
        cout<<"Enter value of a : "<<endl;
        cin>>a;
        cout<<"Enter value of b : "<<endl;
        cin>>b;
        cout<<"The sum is : "<<a+b<<endl;
    }
};

class xyz : public abc
{
    int x,y;
    public:
    void show() override
    {
        cout<<"Enter value of x : "<<endl;
        cin>>x;
        cout<<"Enter value of y : "<<endl;
        cin>>y;
        cout<<"The product is : "<<x*y<<endl;
    }
};

int main()
{
    xyz obj1;
    obj1.show();

    xyz obj2;
    obj2.abc::show();
}

