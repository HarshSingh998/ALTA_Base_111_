#include <iostream>
using namespace std;

int main() {
    int n;

    // Read the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Declare the array
    int arr[n];

    // Read array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Ask for the index to modify
    int index;
    cout << "Enter the index you want to modify: ";
    cin >> index;

    // Check whether the index is valid
    if (index < 0 || index >= n) {
        cout << "Invalid index!" << endl;
        return 0;
    }

    // Access and print the current value
    cout << "Current value: " << arr[index] << endl;

    // Take the new value
    int newValue;
    cout << "Enter the new value: ";
    cin >> newValue;

    // Modify the array element
    arr[index] = newValue;

    // Print the modified array
    cout << "Modified array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}