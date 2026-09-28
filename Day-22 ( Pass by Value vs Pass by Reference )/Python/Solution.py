# Function
def pass_by_value(x):
    x = x + 10
    print("Inside function:", x)


a = int(input("Enter a number: "))

print("Before function:", a)

pass_by_value(a)

print("After function:", a)