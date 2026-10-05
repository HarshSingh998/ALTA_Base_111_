# Define a custom type
class Rectangle:

    # Constructor
    def __init__(self, length, width):
        self.length = length
        self.width = width

    # Method to calculate area
    def calculate_area(self):
        return self.length * self.width


# Take input
length = float(input("Enter length: "))
width = float(input("Enter width: "))

# Create an object
rectangle = Rectangle(length, width)

# Call the method
area = rectangle.calculate_area()

# Display result
print("Area of rectangle:", area)




