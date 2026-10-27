//WAP to display car details using array of object
#include<iostream>
using namespace std;
class Car{
    int modelNo;
    char modelName[30];
    float price;
    
    public:
    void set(){
        cout<<"Enter model number :"<<endl;
        cin>>modelNo;
        cout<<"Enter model name :"<<endl;
        cin>>modelName;
        cout<<"Enter model price :"<<endl;
        cin>>price;
    }

    void get(){
        cout<<"Model number :"<<endl;
        cout<<"Model name :"<<endl;
        cout<<"Model price :"<<endl;
    }
};

int main(){
    Car c[3];
    int i;
    for(i=1;i<4;i++){
       cout<<"Enter details of Car"<<i<<endl;
       c[i].set(); 
    }
    for(i=1;i<4;i++){
       cout<<"Details of Car"<<i<<endl;
       c[i].get(); 
    }


}