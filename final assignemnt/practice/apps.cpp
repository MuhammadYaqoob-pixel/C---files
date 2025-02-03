// Q.1) Write a C++ program to simulate a secret number guessing game. The program should:
// A. Prompt the user to guess the secret number.
// B. If the user's guess is higher than the secret number, display "Too high. Try again."
// C. If the user's guess is lower than the secret number, display "Too low. Try again."
// D. If the user guesses the secret number correctly, display "Congratulations! You guessed 
// the number correctly
#include<iostream>
using namespace std;
int main(){
//     int secret_num=0;
// int guess_num=6;
// cout<<"enter secret number";
// cin>>secret_num;
// if(secret_num>guess_num){
//     cout<<"too high"<<endl;}

//      else if(secret_num<guess_num){
//         cout<<"too low"<<endl;
//     }
//     else
//     cout<<"wow you chose right number"<<endl;

// ====QNO2
// Q.2) Write a C++ program to simulate an ATM pin verification system.
// 1. Prompt the user to enter their 4-digit pin.
// 2. Check if the pin is correct (assume the correct pin is 1234).
// 3. If the pin is correct, display "Pin correct. Welcome!"
// 4. If the pin is incorrect, display "Pin incorrect. Try again." and prompt the user to enter their 
// pin again.
// 5. Allow the user to attempt to enter their pin a maximum of 3 times.
int password;  // Fixed variable name
    int attempt = 0;
    int max_attempt = 3;
    const int num = 1234;

    while (attempt < max_attempt) {  // Fixed loop condition
        cout << "Enter password: ";
        cin >> password;

        if (password == num) {  // Fixed variable name
            cout << "Wow! Your PIN is correct." << endl;
            break;  // Exit loop if password is correct
        } else { 
            cout << "Try again" << endl;
            attempt++;
        }
    }

    if (attempt == max_attempt) {
        cout << "Maximum attempts reached. Access denied." << endl;
    }

return 0;

}