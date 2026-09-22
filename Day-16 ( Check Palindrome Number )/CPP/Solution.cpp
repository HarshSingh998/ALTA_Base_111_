#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;

    int original = n;
    int rev = 0;

    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (original == rev) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}