//normal pointer
//#include<iostream>
// using namespace std;

// int main(){
//     int a=10;
//     int *b= &a;

//     cout<<"value of a :"<<a<<endl;
//     cout<<"Value of pointer variable :"<<b<<endl;
// }


#include<iostream>
using namespace std;

//declare a class w constructor
class calc
{
    private:
    int age;
    string name;

    public:
    calc(int age, string name)   //arguments passed to functions comes to the constructor
    {
        this->age=age;
        this->name =name;
    }
    void display()
    {
        cout<<"The name is : "<<name<<endl;  //1
        cout<<"The age is : "<<age<<endl;
        cout<<"The name is : "<<this->name<<endl;  //2
        cout<<"The age is : "<<this->age<<endl;
        cout<<(*this).name<<endl;    //3
        cout<<(*this).age<<endl;
    }
};

int main()
{
    calc c(19,"Lavanya");
    c.display();
}
