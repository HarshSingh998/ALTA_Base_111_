#include <iostream>
using namespace std;

// Function for addition
int add(int a, int b) {
    return a + b;
}

// Function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function for multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function for division
float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int choice;
    int a, b;

    // cout << "===== MENU =====" << endl;
    // cout << "1. Addition" << endl;
    // cout << "2. Subtraction" << endl;
    // cout << "3. Multiplication" << endl;
    // cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    switch (choice) {
        case 1:
            cout << "Result: " << add(a, b) << endl;
            break;

        case 2:
            cout << "Result: " << subtract(a, b) << endl;
            break;

        case 3:
            cout << "Result: " << multiply(a, b) << endl;
            break;

        case 4:
            if (b == 0) {
                cout << "Cannot divide by zero." << endl;
            }
            else {
                cout << "Result: " << divide(a, b) << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}



