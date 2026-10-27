//WAP to show structure
#include<iostream>
using namespace std;
struct Student
{
    int roll;
    char name[30];
};
int main(){
    Student s;
    cout<<"Enter the student roll:"<<endl;
    cin>>s.roll;
    cout<<"Enter the name:"<<endl;
    cin>>s.name;

    cout<<"The details of student are:-"<<endl;
    cout<<"Roll:"<<s.roll<<endl;
    cout<<"Name:"<<s.name<<endl;

    return 0;
}