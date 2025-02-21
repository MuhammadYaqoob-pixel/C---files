#include<iostream>
#include <string>
using namespace std;
class person{
public:
    string name;
int age;
// person(string name, int age){
//     this->name = name;
//     this->age = age;    
// }


// }

person(){
cout<<"i am a parent costructor"<<endl;
}

};


class student : public person{
public:
 int roll_no;
//  student(){

//  }


// class teacher : public person{
// public:
//     int salary;
//     teacher(){

//     }
// };
// student(string name, int age, int roll_no):person( name,  age){
    
//     this->roll_no = roll_no;
//    // cout<<"i am a child constructor"<<endl;
// }
void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Roll No: "<<roll_no<<endl;
//cout<<"salary: "<<salary<<endl;
}

};
int main(){

    //student s1("Ali", 20, 123);
    // t1.name = "Ali";
    // t1.age = 20;
    // t1.roll_no = 123;
    // t1.salary= 50000
    // t1.getInfo();

student s1;
s1.name = "Ali";
s1.age = 20;
s1.roll_no = 123;
s1.getInfo();

    return 0;
}