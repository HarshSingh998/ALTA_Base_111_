#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, height;

    cout << "Enter your weight in kg: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    double bmi = weight / (height * height);

    cout << fixed << setprecision(2);
    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    }
    else {
        if (bmi < 25) {
            cout << "Category: Normal weight" << endl;
        }
        else {
            if (bmi < 30) {
                cout << "Category: Overweight" << endl;
            }
            else {
                cout << "Category: Obese" << endl;
            }
        }
    }

    return 0;
}

