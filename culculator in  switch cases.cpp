#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter the operator (+, -, *, /,%): ";
    cin >> op;

    switch(op) {
        case '+':
 
            result = num1 + num2;
            cout<<"result"<<result<<endl;
 break;
 
     case '-':
            result = num1 - num2;
cout<<"result"<<result<<endl;
 break;
     case '*':
            result = num1 * num2;
            cout<<"result"<<result<<endl;
 break;
     case '/':
            result = num1 / num2;
            cout<<"result"<<result<<endl;
 break;
 
     case '%':
            result = num1 + num2;
            cout<<"result"<<result<<endl;cout<<"result"<<result<<endl;
 break;


}
 return 0;
 }