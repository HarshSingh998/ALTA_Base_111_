# Function for addition
def add(a, b):
    return a + b


# Function for subtraction
def subtract(a, b):
    return a - b


# Function for multiplication
def multiply(a, b):
    return a * b


# Function for division
def divide(a, b):
    return a / b


# print("===== MENU =====")
# print("1. Addition")
# print("2. Subtraction")
# print("3. Multiplication")
# print("4. Division")

choice = int(input("Enter your choice: "))

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

match choice:
    case 1:
        print("Result:", add(a, b))

    case 2:
        print("Result:", subtract(a, b))

    case 3:
        print("Result:", multiply(a, b))

    case 4:
        if b == 0:
            print("Cannot divide by zero.")
        else:
            print("Result:", divide(a, b))

    case _:
        print("Invalid choice.")