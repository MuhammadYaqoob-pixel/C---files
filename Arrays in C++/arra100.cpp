#include <iostream>

using namespace std;

int main() {
    int n = 100;
    int arr[100];
    
    // Store all elements as 1
    for (int i = 0; i < 100; i++) {
        arr[i] = 1;
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    double average = static_cast<double>(sum) / n;
    
    cout << "The average is: " << average << endl;
    
    return 0;
}
