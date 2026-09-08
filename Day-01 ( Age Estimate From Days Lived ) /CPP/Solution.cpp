#include <iostream>
using namespace std;

int main() {
    cout << "=== Age Estimator ===" << endl;

    int days;
    cout << "Enter the number of days you have lived: ";
    cin >> days;

    // Calculate years
    int years = days / 365;
    int remainingDays = days % 365;

    // Calculate months
    int months = remainingDays / 30;
    int finalDays = remainingDays % 30;

    cout << endl;
    cout << "Your estimated age is:" << endl;
    cout << years << " years, "
         << months << " months, "
         << finalDays << " days" << endl;

    return 0;
}

