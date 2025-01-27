#include <iostream>
using namespace std;

int main() {
    // Secret number set to 7
    const int secretNumber = 7;
    int userGuess = 0;

    cout << "Welcome to the Secret Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" <<endl;

    // Game loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > secretNumber) {
            cout << "Too high. Try again." <<endl;
        } else if (userGuess < secretNumber) {
            cout << "Too low. Try again." <<endl;
        } else {
            cout << "Congratulations! You guessed the number correctly." <<endl;
            break;
        }
    }

    return 0;
}
