#include <iostream>
using namespace std;

// Structure to store multiple values
struct Result {
    int sum;
    int difference;
};

// Function returning multiple values
Result calculate(int a, int b) {
    Result result;

    result.sum = a + b;
    result.difference = a - b;

    return result;
}

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    Result answer = calculate(a, b);

    cout << "Sum: " << answer.sum << endl;
    cout << "Difference: " << answer.difference << endl;

    return 0;
}