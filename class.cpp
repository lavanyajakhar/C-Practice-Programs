//public- papa beta and family
//private- papa
//protected- papa and beta
#include<iostream>
using namespace std;

// class person{
//     public:
//     int age;
//     string name;
//     void get(){
//         cout<<"Enter the name: "<<endl;
//         cin>>name;
//         cout<<"Enter the age : "<<endl;
//         cin>>age;
//     }
//     void set(){
//         cout<<"The name is "<<name<<endl;
//         cout<<"The age is "<<age<<endl;
//     }
// };
// int main(){
//     person obj;
//     obj.get();
//     obj.set();

// }

// class person{
//     public:
//     int age;
//     string name;
    
//     };
// int main(){
//     person obj;
//     cout<<"Enter the name: "<<endl;
//     cin>>obj.name;
//     cout<<"Enter the age : "<<endl;
//     cin>>obj.age;
//     cout<<"The name is "<<obj.name<<endl;
//     cout<<"The age is "<<obj.age<<endl;


// }


class person{
    public:
    int age;
    private:
    string name;
    protected:
    string surname;
    public:
    void get(){
        cout<<"Enter the age: "<<endl;
        cin>>age;
    }
    void getname(string n){
        name=n;
    }
    void getsurname(string s){
        surname=s;
    }
    void set(){
        cout<<"My name is "<<name<<" and my surname is "<<surname<<" and my age is "<<age<<"."<<endl;
    }
};
int main(){
    person obj;
    obj.age=19;
    obj.getname("Lavanya");
    obj.getsurname("Jakhar");
    obj.set();

}
