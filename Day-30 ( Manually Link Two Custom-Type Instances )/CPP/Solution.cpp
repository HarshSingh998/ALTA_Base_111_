#include <iostream>
#include <string>
using namespace std;

// Define a custom type
struct Student {
    string name;
    Student* next;
};

int main() {
    // Create two Student instances
    Student student1;
    Student student2;

    // Set their names
    student1.name = "Rahul";
    student2.name = "Aman";

    // Initially, student1 is not linked to anyone
    student1.next = nullptr;

    // Manually link student1 to student2
    student1.next = &student2;

    // Print the first student
    cout << "First Student: " << student1.name << endl;

    // Check whether student1 is linked
    if (student1.next != nullptr) {
        cout << "Linked Student: " << student1.next->name << endl;
    }

    return 0;
}


