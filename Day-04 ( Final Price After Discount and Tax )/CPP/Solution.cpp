#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double originalPrice, discountPercent, taxPercent;

    cin >> originalPrice >> discountPercent >> taxPercent;

    // Calculate discount
    double discountAmount = originalPrice * (discountPercent / 100);

    // Price after discount
    double discountedPrice = originalPrice - discountAmount;

    // Calculate tax on discounted price
    double taxAmount = discountedPrice * (taxPercent / 100);

    // Final price
    double finalPrice = discountedPrice + taxAmount;

    // Display results with 2 decimal places
    cout << fixed << setprecision(2);

    cout << "Discounted Price: " << discountedPrice << endl;
    cout << "Final Price: " << finalPrice << endl;

    return 0;
}



