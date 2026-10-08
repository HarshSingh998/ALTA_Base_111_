#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "At least two elements are required." << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find largest and second largest
    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Check if a distinct second largest exists
    if (secondLargest == INT_MIN) {
        cout << "Second largest element does not exist." << endl;
    }
    else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}