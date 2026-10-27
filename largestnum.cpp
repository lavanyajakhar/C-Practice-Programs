#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    cout<<"enter the value of c: "<<endl;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"A is greatest."<<endl;
    }
    if(b>a && b>c)
    {
        cout<<"B is greatest."<<endl;
    }
    else
    {
        cout<<"C is greatest."<<endl;
    }
}