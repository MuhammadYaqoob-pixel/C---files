#include <iostream>
using namespace std;

int main() {
    const int correctPin = 1234; // Predefined correct PIN
    int userPin;                // Variable to store the user's input
    int attempts = 0;           // Counter for attempts
    const int maxAttempts = 3;  // Maximum allowed attempts

    cout << "Welcome to the ATM!" << endl;

    // Loop to allow up to 3 attempts
    while (attempts < maxAttempts) {
        cout << "Enter your 4-digit PIN: ";
        cin >> userPin;

        // Check if the entered PIN is correct
        if (userPin == correctPin) {
            cout << "PIN correct. Welcome!" << endl;
            return 0; // Exit the program after successful login
        } else {
            cout << "PIN incorrect. Try again." << endl;
            attempts++; // Increment the attempt counter
        }
    }

    // If all attempts are used, deny access
    cout << "Too many incorrect attempts. Access denied." << endl;

    return 0;
}
