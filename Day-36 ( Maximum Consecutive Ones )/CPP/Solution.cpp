
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

    cout << "Enter binary array elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currentOnes = 0;
    int maxOnes = 0;

    // Count consecutive ones.
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currentOnes++;
            if (currentOnes > maxOnes) {
                maxOnes = currentOnes;
            }
        } else {
            currentOnes = 0;
        }
    }

    cout << "Maximum consecutive ones: " << maxOnes << endl;

    return 0;
}
