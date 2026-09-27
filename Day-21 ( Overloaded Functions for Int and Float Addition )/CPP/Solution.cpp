#include <iostream>
using namespace std;

// Function for integer addition
int add(int a, int b) {
    return a + b;
}

// Overloaded function for float addition
float add(float a, float b) {
    return a + b;
}

int main() {
    int int1, int2;
    float float1, float2;

    cout << "Enter first integer: ";
    cin >> int1;

    cout << "Enter second integer: ";
    cin >> int2;

    cout << "Enter first float number: ";
    cin >> float1;

    cout << "Enter second float number: ";
    cin >> float2;

    cout << "Integer addition: " << add(int1, int2) << endl;
    cout << "Float addition: " << add(float1, float2) << endl;

    return 0;
}