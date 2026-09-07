#include <iostream>
using namespace std;

int main() {
    cout << "=== Age Estimator ===" << endl;

    int days;
    cout << "Enter the number of days you have lived: ";
    cin >> days;

    int years = days / 365;
    int remainingDays = days % 365;

    cout << endl;
    cout << "Your estimated age is:" << endl;
    cout << years << " years and " << remainingDays << " days" << endl;

    return 0;
}
