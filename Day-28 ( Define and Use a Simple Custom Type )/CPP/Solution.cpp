#include <iostream>
#include <string>
using namespace std;

// Define a custom type
struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    Student student;

    // Take student details as input
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter student age: ";
    cin >> student.age;

    cout << "Enter student marks: ";
    cin >> student.marks;

    // Display student details
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}