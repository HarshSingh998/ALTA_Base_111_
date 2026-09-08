a, b = map(int, input().split())

print(f"Before swap: a = {a}, b = {b}")

# Swap using temporary variable
temp = a
a = b
b = temp

print(f"After swap: a = {a}, b = {b}")