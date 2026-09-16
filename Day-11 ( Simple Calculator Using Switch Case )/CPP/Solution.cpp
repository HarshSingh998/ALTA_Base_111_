#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;

        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;

        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;

        case '/':
            if (b == 0) {
                cout << "Cannot divide by zero" << endl;
            }
            else {
                cout << a << " / " << b << " = " << a / b << endl;
            }
            break;
            
        case '%':
            if (b == 0) {
                cout << "Cannot divide by zero" << endl;
            }
            else {
                cout << a << " % " << b << " = " << a % b << endl;
            }
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}