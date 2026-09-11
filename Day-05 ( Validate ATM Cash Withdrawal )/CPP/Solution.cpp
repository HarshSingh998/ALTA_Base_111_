#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double accountBalance;
    int withdrawalAmount;

    cin >> accountBalance >> withdrawalAmount;

    const double transactionFee = 2.0;

    bool valid = withdrawalAmount > 0 &&
                 withdrawalAmount % 100 == 0 &&
                 accountBalance >= withdrawalAmount + transactionFee;

    cout << boolalpha;
    cout << "Transaction Valid: " << valid << endl;

    if (valid) {
        double remainingBalance = accountBalance - withdrawalAmount - transactionFee;
        cout << fixed << setprecision(2);
        cout << "Remaining Balance: " << remainingBalance << endl;
    }

    return 0;
}



