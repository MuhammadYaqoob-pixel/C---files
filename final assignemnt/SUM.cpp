#include <iostream>
using namespace std;
int main() {
    int sum = 0;

    // Calculate the sum of the first 10 natural numbers
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    cout<< "The sum of the first 10 natural numbers is: " << sum <<endl;

    return 0;
}
