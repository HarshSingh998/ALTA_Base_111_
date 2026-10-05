# Define a custom type
class Student:
    def __init__(self, name):
        self.name = name
        self.next = None


# Create two Student instances
student1 = Student("Rahul")
student2 = Student("Aman")

# Manually link student1 to student2
student1.next = student2

# Print the first student
print("First Student:", student1.name)

# Check whether student1 is linked
if student1.next is not None:
    print("Linked Student:", student1.next.name)







    