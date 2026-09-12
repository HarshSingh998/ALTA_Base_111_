#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int largest;

    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b > c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}

