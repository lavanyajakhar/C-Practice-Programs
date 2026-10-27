#include<iostream>   //header file
using namespace std;  //calling of standard library

int main()//function declaration
{    
    int a,b,c,sum,subt,mul,div; //datatype declaration
    cout<<"Enter the value of a :"<<endl;  //Declaration of statement
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    cout<<"Enter the value of c :"<<endl;
    cin>>c;
    sum=a+b+c; //operation performed
    cout<<"The sum is: "<<sum<<endl;
    subt=a-b; //operation performed
    cout<<"The subtraction result is: "<<subt<<endl;
    mul=a*b; //operation performed
    cout<<"The multiplication is: "<<mul<<endl;
    div=a/b; //operation performed
    cout<<"The division answer50 is: "<<div<<endl;
    return 0;

}