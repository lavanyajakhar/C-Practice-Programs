#include<iostream>
using namespace std;
// int main(){
//     int i,num,rev=0,unit,ten,hun;
//     cout<<"Enter the three digit number:";
//     cin>>num;
    
//     unit=(num%10)%10;
//     cout<<"the unit is "<<unit<<endl;
//     ten=(num/10)%10;
//     cout<<"The tenth is "<<ten<<endl;
//     hun= num/100;
//     cout<<"The hundredth is "<<hun<<endl;
//     rev=unit*100+ten*10+hun*1;
//     if(num==rev)
//     {
//         cout<<"The number is pallindrome."<<endl;
//     }
//     else{
//         cout<<"The number is not pallindrome."<<endl;
//     }
// }
int main(){
    int n,i,num,rev=0,no;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    no=num;
    while(num>0){
        n=num%10;
        rev=rev+n*10;
        num=num/10;

    }
    if(no==rev){
        cout<<"The number is pallindrome.";

    }
    else{
        cout<<"The number is not pallindrome.";
    }
}