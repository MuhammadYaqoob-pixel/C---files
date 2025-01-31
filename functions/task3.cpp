#include <iostream>

using namespace std;

void f(int* p, int m) {
    m = m + 5; // Increment local copy of m
    *p = *p + m; // Modify the value pointed by p
    return;
}

int main() {
    int i = 5, j = 10;

    f(&i, j); // Pass the address of i and value of j

    cout << "Updated value of i: " << i << endl; // Print the updated value of i

    return 0;
}
