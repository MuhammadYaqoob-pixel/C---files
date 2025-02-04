#include<iostream>
using namespace std;
// without parameter
// void sum(){
// int num1, num2;
// cout<<"enter first number"<<endl;
// cin>>num1;
// cout<<"enter second number"<<endl;
// cin>>num2;
// int c=num1+num2;
// cout<<"num1+num2 is :"<<c<<endl;

// }
// with parameters
int sum(int a, int b){
return a+b;
}
int main() {
int result=sum(3, 4);

//sum();
cout<<"sum is"<<result<<endl;


    return 0;
}