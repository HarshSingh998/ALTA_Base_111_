
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSorted = true;

    // Compare each element with the next element.
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
