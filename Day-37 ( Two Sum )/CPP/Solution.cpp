
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n < 2) {
        cout << "At least two elements are required." << endl;
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    unordered_map<int, int> seen;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int needed = target - arr[i];

        // Check whether the required number appeared earlier.
        if (seen.find(needed) != seen.end()) {
            cout << "Indices: " << seen[needed]
                 << " and " << i << endl;
            cout << "Values: " << arr[seen[needed]]
                 << " and " << arr[i] << endl;
            found = true;
            break;
        }

        // Store the current value and its index.
        seen[arr[i]] = i;
    }

    if (!found) {
        cout << "No pair found." << endl;
    }

    return 0;
}
