// Write a program in C++ to find the sum of the first 10 natural numbers
#include<iostream>
using namespace std;
int main(){
int sum=0;
for(int i=1; i<=10; i++){
    sum+=i;
}
cout<<"sum of 10 numbers is:"<<sum<<endl;
return 0;
}