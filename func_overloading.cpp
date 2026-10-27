#include<iostream>
using namespace std;

int add(int a , int b)
{
    return a + b;

}

float add(float a , float b)
{
    return a + b;

}

int main()
{
    cout<<"sum of integers : "<<add(3,4)<<endl;
    cout<<"sum of numbers : "<<add(3.33f ,4.44f )<<endl;

}