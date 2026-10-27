//inheritence- accessing of objects/methods of super class to child class
// 1. single  2.multi-level  3.hierarchial  4. hybrid   5.multiple

//SINGLE LEVEL

// #include<iostream>
// using namespace std;

// class super
// {
//     private:
//     string name;
    
//     public:
//     void get()
//     {
//         cout<<"Enter the name:"<<endl;
//         cin>>name;
//     }
//     void set()
//     {
//         cout<<"The name is : "<<name<<endl;
//     }

// };

// class child : public super
// {
//     private:
//     int age =19;          //child class inherits functions of super class
//     public:
//     void display()
//     {
//         cout<<"The age is :"<<age<<endl;
//     }


// };

// int main(){
//     child c;
//     c.get();
//     c.set();
//     c.display();
// }


//MULTI-LEVEL

#include<iostream>
using namespace std;

class super
{
    private:
    int a;
    
    public:
    void get()
    {
        cout<<"Enter the value of a:";
        cin>>a;
    }
    void set()
    {
        cout<<"The value of a is : "<<a<<endl;
    }

};

class child1 : public super
{
    private:
    int b =20;          //child class inherits functions of super class
    public:
    void display()
    {
        cout<<"The value of b is :"<<b<<endl;
    }


};

class child2 : public child1
{
    private:
    int c=30;
    public:
    void show()
    {
        cout<<"The value of c :"<<c<<endl;
    }
};

int main(){
    child2 c;
    c.get();
    c.set();
    c.display();
    c.show();
}

//MULTIPLE

// #include<iostream>
// using namespace std;

// class landVehicle                 //first super
// {
//     private:
//     string car_land = "Land Rover";
    
//     public:
//     void get()
//     {
//         cout<<"The car on Road is : "<<car_land<<endl;
//     }
    
// };

// class waterVehicle                 //second super
// {
//     private:
//     string car_name = "Mitshubishi";
    
//     public:
//     void set()
//     {
//         cout<<"The car on water is : "<<car_name<<endl;
//     }
    

// };

// class amphibious: public landVehicle, public waterVehicle
// {
//     private:
//     string amp_car = "Tesla";          //child class inherits functions of both super classes
//     public:
//     void display()
//     {
//         cout<<"The AMP car is : "<<amp_car<<endl;
//     }


// };


// int main(){
//     amphibious amp;
//     amp.get();
//     amp.set();
//     amp.display();
// }


//HIERARCHIAL
// #include<iostream>
// using namespace std;

// class animal
// {
//     private:
//     string a = "LION";
    
//     public:
//     void get()
//     {
//         cout<<"The animal is : "<<a<<endl;
//     }

// };

// class cat : public animal
// {
//     private:
//     string cat1 = "PERSIAN CAT";          //child class inherits functions of super class
//     public:
//     void set()
//     {
//         cout<<"The second animal is :"<<cat1<<endl;
//     }


// };

// class dog : public animal
// {
//     private:
//     string dog1 = "FRENCH BULLDOG";
//     public:
//     void show()
//     {
//         cout<<"The third animal is :"<<dog1<<endl;
//     }
// };

// int main(){
//     cat c;
//     dog d;
//     c.get();
//     d.get();  //both objects c and d can access functions of class animal
//     c.set();
//     d.show();
// }

//HYBRID
// #include<iostream>
// using namespace std;

// class super
// {
//     public:
//     void get()
//     {
//         cout<<"I am super class."<<endl;
//     }

// };

// class base1: virtual public super
// {
//     public:
//     void set()
//     {
//         cout<<"I am Sub1"<<endl;   //virtual keyword 
//     }
// };

// class base2 : virtual public super
// {
//     public:
//     void show()
//     {
//         cout<<"I am base 2."<<endl;
//     }
// };

// class base3: public base1, public base2
// {
//     public:
//     void display()
//     {
//         cout<<"I am child of base 1 and 2."<<endl;
//     }   
// };

// int main()
// {
//     base3 obj;
//     obj.get();
//     obj.set();
//     obj.show();
//     obj.display();
// }