#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n % 3 == 0 && n % 5 == 0) {
        cout << "Divisible by both 3 and 5" << endl;
    }
    else if (n % 3 == 0) {
        cout << "Divisible only by 3" << endl;
    }
    else if (n % 5 == 0) {
        cout << "Divisible only by 5" << endl;
    }
    else {
        cout << "Not divisible by 3 or 5" << endl;
    }

    return 0;
}



