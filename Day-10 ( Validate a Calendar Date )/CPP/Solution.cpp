#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Enter the day: ";
    cin >> day;

    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;

    int maxDays;

    if (month < 1 || month > 12) {
        cout << "INVALID DATE" << endl;
        return 0;
    }

    if (month == 2) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            maxDays = 29;
        }
        else {
            maxDays = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    }
    else {
        maxDays = 31;
    }

    if (day >= 1 && day <= maxDays) {
        cout << "VALID DATE" << endl;
    }
    else {
        cout << "INVALID DATE" << endl;
    }

    return 0;
}
