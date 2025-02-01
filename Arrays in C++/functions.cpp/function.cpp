// #include <iostream>
// using namespace std;

// void modifyValue(int x) {
//     x = x + 10;  // Changes only the copy
//     cout << "Inside function: " << x << endl;
// }

// int main() {
//     int num = 5;
//     modifyValue(num);
//     cout << "Outside function: " << num << endl;  // Original remains unchanged
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//  int x = 5;
//  int y;
//  //y = x++; 
//  //y = ++x; 
// y = x--;
//  y = --x; 
//  cout << "x = " << x << endl;
//  cout << "y = " << y << endl;
//  return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int number;

//     // Taking input from the user
//     cout << "Enter an integer: ";
//     cin >> number;

//     // Increment the number by 5
//     number += 5;

//     // Decrement the number by 3
//     number -= 3;

//     // Multiply the number by 2
//     number *= 2;

//     // Output the final result
//     cout << "The final result is: " << number << endl;

//     return 0;
// }
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double purchaseAmount;
    char membershipStatus;

    // Step 1: Ask the user for their total purchase amount
    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    // Step 2: Check if the purchase amount is greater than $100
    if (purchaseAmount > 100) {
        // Step 3: Ask if the user is a premium member
        cout << "Are you a premium member? (Y/N): ";
        cin >> membershipStatus;

        // Step 4: Offer a discount based on membership status
        if (membershipStatus == 'Y' || membershipStatus == 'y') {
            // Premium member: 20% discount
            purchaseAmount -= purchaseAmount * 0.20;
            cout << "You are a premium member! You get a 20% discount." << endl;
        } else {
            // Non-premium member: 10% discount
            purchaseAmount -= purchaseAmount * 0.10;
            cout << "You are not a premium member. You get a 10% discount." << endl;
        }
    } else {
        cout << "No discount applied as the total purchase amount is less than $100." << endl;
    }

    // Step 5: Output the final purchase amount after discount (if any)
    cout << fixed << setprecision(2); // Set decimal precision to 2 places
    cout << "Your final purchase amount is: $" << purchaseAmount << endl;

    return 0;
}
