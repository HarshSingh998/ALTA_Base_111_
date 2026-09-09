#include <iostream>
using namespace std;

int main() {
    bool isActive;

    cin >> isActive;

    cout << boolalpha;
    cout << "Initial: " << isActive << endl;

    // Toggle the boolean value
    isActive = !isActive;

    cout << "Toggled: " << isActive << endl;

    return 0;
}


