def calculate(a, b):
    sum_value = a + b
    difference = a - b

    return sum_value, difference


a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

sum_value, difference = calculate(a, b)

print("Sum:", sum_value)
print("Difference:", difference)