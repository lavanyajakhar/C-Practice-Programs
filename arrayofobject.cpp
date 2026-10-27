#include<iostream>
using namespace std;
class Person{
    public:
    int age;
    string name;
    
    void get(void);
    void set(void);
};
void Person::get(){
    cout<<"Enter the name: "<<endl;
    cin>>name;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    
}
void Person::set(){
    cout<<"The name is : "<<name<<endl;
    cout<<"The age is : "<<age<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of people whose data you want to enter : "<<endl;
    cin>>n;
    Person *obj= new Person[n];
    for (int i=0;i<n;i++){
        obj[i].get();
    }
    for(int i=0;i,n;i++){
        obj[i].set();
    }
}
