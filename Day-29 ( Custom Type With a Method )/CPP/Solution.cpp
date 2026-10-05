#include <iostream>
using namespace std;

// Define a custom type
struct Rectangle {
    double length;
    double width;

    // Method to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rectangle;

    // Take input
    cout << "Enter length: ";
    cin >> rectangle.length;

    cout << "Enter width: ";
    cin >> rectangle.width;

    // Call the method
    double area = rectangle.calculateArea();

    // Display result
    cout << "Area of rectangle: " << area << endl;

    return 0;
}




