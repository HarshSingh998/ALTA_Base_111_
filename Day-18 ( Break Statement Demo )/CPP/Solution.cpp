#include <iostream>
using namespace std;

int main() {
    int val;
    int sum = 0;

    cout << "Enter integers (0 or negative number to stop): ";

    while (cin >> val) {
        if (val <= 0) {
            break;
        }

        sum = sum + val;
    }

    cout << "Sum before break: " << sum << endl;

    return 0;
}








