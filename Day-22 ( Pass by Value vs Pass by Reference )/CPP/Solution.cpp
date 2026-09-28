#include <iostream>
using namespace std;

// Pass by Value
void passByValue(int x) {
    x = x + 10;
    cout << "Inside Pass by Value: " << x << endl;
}

// Pass by Reference
void passByReference(int &x) {
    x = x + 10;
    cout << "Inside Pass by Reference: " << x << endl;
}

int main() {
    int a, b;

    cout << "Enter a number for Pass by Value: ";
    cin >> a;

    cout << "Enter a number for Pass by Reference: ";
    cin >> b;

    cout << "\nBefore Pass by Value: " << a << endl;
    passByValue(a);
    cout << "After Pass by Value: " << a << endl;

    cout << "\nBefore Pass by Reference: " << b << endl;
    passByReference(b);
    cout << "After Pass by Reference: " << b << endl;

    return 0;
}