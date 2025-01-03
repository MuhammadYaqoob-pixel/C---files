#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)

{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        {

            start++;
            end--;
        }
    }
}
/* code */

int main()

{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 7;
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    /* code */
    cout << endl;
    return 0;
}