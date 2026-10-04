# Define a custom type
class Student:
    def __init__(self, name, age, marks):
        self.name = name
        self.age = age
        self.marks = marks


# Take student details as input
name = input("Enter student name: ")
age = int(input("Enter student age: "))
marks = float(input("Enter student marks: "))

# Create an object
student = Student(name, age, marks)

# Display student details
print("\nStudent Details:")
print("Name:", student.name)
print("Age:", student.age)
print("Marks:", student.marks)