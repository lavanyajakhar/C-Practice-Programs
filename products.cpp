#include<iostream>
using namespace std;

class Product{
    int productID;
    char productName[40];
    float productPrice;

    public:
    void set(){
        cout<<"Enter product ID :"<<endl;
        cin>>productID;
        cout<<"Enter product name :"<<endl;
        cin>>productName;
        cout<<"Enter product price :"<<endl;
        cin>>productPrice;
    }

    void get(){
        cout<<"Product ID :"<<productID<<endl;
        cout<<"Product name :"<<productName<<endl;
        cout<<"Product price :"<<productPrice<<endl;
    }
};

int main(){
    Product p[3];
    int i;
    for(i=1;i<4;i++){
        cout<<"Enter details of the Product :"<<i<<endl;
        p[i].set();
    }
    for(i=1;i<4;i++){
        cout<<"Details of product"<<i<<"are :"<<endl;
        p[i].get();
    }
    return 0;

    max=0;
    for(i=0;i<3;i++){
        if (p[i].productPrice>p[max].productPrice){
            max=i;
        }
    }
    cout<<"The product with highest price :"<<p[max];
}