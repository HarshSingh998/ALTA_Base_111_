#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Declare an array
    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print array elements
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


