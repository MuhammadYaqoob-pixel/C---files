#include <iostream>
using namespace std;

int main() {
    double billAmount, discount = 0, totalBill;

    // Input bill amount
    cout << "Enter the bill amount: $";
    cin >> billAmount;

    // Calculate discount using nested if-else
    if (billAmount > 100) {
        discount = 0.10 * billAmount; // 10% discount
    } else {
        if (billAmount > 50) {
            discount = 0.05 * billAmount; // 5% discount
        } else {
            discount = 0; // No discount
        }
    }

    // Calculate total bill amount
    totalBill = billAmount - discount;

    // Output the results
    cout << "Original Bill Amount: $" << billAmount << endl;
    cout << "Discount Applied: $" << discount << endl;
    cout << "Total Bill Amount: $" << totalBill << endl;

    return 0;
}
