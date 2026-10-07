#include <iostream>
using namespace std;

int main() {
    int n;

    // Read the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Handle invalid size
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    int arr[n];

    // Read array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume the first element is the largest
    int largest = arr[0];

    // Check the remaining elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Display the largest element
    cout << "Largest element: " << largest << endl;

    return 0;
}