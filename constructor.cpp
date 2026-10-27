//DEFAULT CONSTRUCTOR
// #include<iostream>
// using namespace std;

// class student
// {
//     private:
//     int rollno;
//     public:
//     student()  //no parameter initialized    //constructor doesnt have any return type
//     {
//         cout<<"Enter the roll no: "<<ends;
//         cin>>rollno;
//         cout<<"The roll no is : "<<rollno<<endl;
//     }
// };

// int main()
// {
//     student obj1,obj2,obj3;
// }



//PARAMETER CONSTRUCTOR
// #include<iostream>
// using namespace std;

// class student
// {
//     private:
//     int rollno;
//     public:
//     student(int r)  //parameter initialized    //constructor doesnt have any return type
//     {
//         rollno=r;
//         cout<<"The roll no is : "<<rollno<<endl;
//     }
// };

// int main()
// {
//     student obj1(10);
//     student obj2(20);
//     student obj3(30);
// }



//COPY CONSTRUCTOR
// #include<iostream>
// using namespace std;

// class student
// {
//     public:
//     int rollno;
//     string name;
//     public:
//     student(int r, string n)  //parameter initialized    //constructor doesnt have any return type
//     {
//         rollno=r;
//         name=n;
//         cout<<"The roll no is : "<<rollno<<endl;
//         cout<<"The name is : "<<name<<endl;
//     }
// };

// int main()
// {
//     student obj1(10,"Lavanya");
//     student obj2= obj1;
//     cout<<"Object 2 is :"<<obj2.rollno<<"and the name is : "<<obj2.name<<endl;
// }



#include<iostream>
using namespace std;

class sports{
    public:
    string sportname;
    sports(){         //DEFAULT CONSTRUCTOR
        sportname="Basketball";
        cout<<"The sport name is: "<<sportname<<endl;
    }
};

int main(){
    sports obj1;
}


























