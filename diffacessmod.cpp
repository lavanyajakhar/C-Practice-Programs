// //WAP to show different access modifiers
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     char name[30];
//     private:
//     int age;
//     protected:
//     int roll;
    
//     public:
//     void set(){
//         Person p;
//         cout<<"AGE:"<<endl;
//         cin>>p.age;   //private and protected can be accessed in the class itself.
//         cout<<"ROLL:"<<endl;
//         cin>>p.roll;
//     }
//     void get(){
//         Person p;
//         cout<<p.age;
//         cout<<p.roll;
//     }
// };
// int main(){
//     Person p;
//     cout<<"NAME:"<<endl;
//     cin>>p.name;

//     cout<<"Details :"<<endl;
//     cout<<p.name;
//     p.set();
//     p.get();

//     return 0;
// }

#include<iostream>
using namespace std;
class Person{
    public:
    char name[30];
    private:
    int age;
    protected:
    int roll;
};

int main(){
    Person p;
    cout<<"NAME:"<<endl;
    cin>>p.name;
    cout<<"AGE:"<<endl;
    //cin>>p.age;   //private and protected cant be accessed here.
    cout<<"ROLL:"<<endl;
    //cin>>p.roll;
    return 0;

    p.name="Lavanya";
    //p.age=19;    cant be accessed
    //p.roll=15;
}