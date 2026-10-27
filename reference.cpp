//WAP to show concept of reference
#include<iostream>
using namespace std;
int main(){
    int a=11;    
    int&ref=a;  //alias name for a
    cout<<"The value of a :"<<a<<endl;
    cout<<"The value using reference :"<<ref<<endl;
    
    ref=20;
    cout<<"Value after changing reference :-"<<endl;
    cout<<"The value of a :"<<a<<endl;
    cout<<"The value using reference :"<<ref<<endl;
    return 0;
}