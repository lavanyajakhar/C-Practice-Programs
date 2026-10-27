#include<iostream>
using namespace std;
 inline int something(int m,int n){
//  static int r;
//  r=r+1;
 return m*n;   
 }
 int compare(int d,int e)
 {
    return(d>e)?d:e;}

int addsum(int x,int y){
    return x*y;
}
int main(){
int a=4,b=6,c;
c=a+b;
cout<<"the sum is:"<<c<<endl;
cout<<"multiplication of 4&6 is:"<<addsum(4,6)<<endl;
cout<<"the output of something is:"<<something(6,7)<<endl;
cout<<"the output of something is:"<<something(8,9)<<endl;
cout<<"the greater among 40&100 is:"<<compare(40,100)<<endl;
}