
// For Both a And b In Same Line.    

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}









// For Both a And b In Different Line.  

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cin >> a;
    cin >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}



