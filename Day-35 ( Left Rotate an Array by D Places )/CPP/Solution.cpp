
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, d;

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

    cout << "Enter rotation count: ";
    cin >> d;

    if (n > 0) {
        d = ((d % n) + n) % n;

        // Reverse the first d elements.
        reverse(arr.begin(), arr.begin() + d);

        // Reverse the remaining elements.
        reverse(arr.begin() + d, arr.end());

        // Reverse the entire array.
        reverse(arr.begin(), arr.end());
    }

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
