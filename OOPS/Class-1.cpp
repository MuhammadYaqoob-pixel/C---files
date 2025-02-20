#include<iostream>
#include<string>
using namespace std;
// class teacher{ 
//     public:
//     string name;
//     string subject;
//     string  dept;
//     double salary;
//     void changedept(string newdept){
//         dept = newdept;
//     }
// };
class student{
    public:
    string name;
    string dept;
    int roll;
    double cgpa;
    void changecgpa(double newcgpa){
        cgpa = newcgpa;
    }
};
int main(){
//  teacher teacher1;
// teacher1.name = "Mr. A";
// teacher1.subject = "Maths";
// teacher1.dept = "CSE"; 
// teacher1.salary = 50000;
// teacher1.changedept("ECE");
// cout<<teacher1.dept<<endl;
// cout<<teacher1.name<<endl;
 student student1;
 student1.name="muhammad yaqoob";
    student1.dept="Data science";
    student1.roll=8;
    student1.cgpa=3.5;
    student1.changecgpa(3.8);
    cout<<"name is"<<student1.name<<endl; 
    cout<<"dept is"<<student1.dept<<endl;
    cout<<"roll is"<<student1.roll<<endl;
    //cout<<"cgpa is"<<student1.cgpa<<endl;


    return 0;
}
