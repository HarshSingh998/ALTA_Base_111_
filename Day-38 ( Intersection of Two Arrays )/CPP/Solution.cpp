
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> arr1(n);

    cout << "Enter first array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    if (m < 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> arr2(m);

    cout << "Enter second array elements: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    // Store elements of the first array.
    unordered_set<int> elements(arr1.begin(), arr1.end());

    // Track common elements already printed.
    unordered_set<int> printed;
    bool found = false;

    cout << "Intersection: ";

    for (int value : arr2) {
        if (elements.count(value) && !printed.count(value)) {
            cout << value << " ";
            printed.insert(value);
            found = true;
        }
    }

    if (!found) {
        cout << "No common elements";
    }

    cout << endl;
    return 0;
}
