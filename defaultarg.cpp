#include<iostream>
using namespace std;

void get(int r=10){             //default argument r=10
    cout<<"r= "<<r<<endl;        //parameter-function definition   arguments- function call
}

int main(){
    get();
    get(222);
}
