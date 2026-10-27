#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int marks;

    void details(){
        cout<<"The name of the student is: "<<name<<endl;
        cout<<"The age of the student is: "<<age<<endl;
        cout<<"The marks of the student is: "<<marks<<endl;
    }
};
int main(){
    student s1;
    s1.name="Lavanya";
    s1.age=19;
    s1.marks=111;
    s1.details();
}