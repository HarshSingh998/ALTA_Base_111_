
# For Both a And b in Same Line. 
# a, b = map(int, input().split()) 
# expects both numbers in one line. 


a, b = map(int, input().split())

print(f"Before swap: a = {a}, b = {b}")

temp = a
a = b
b = temp

print(f"After swap: a = {a}, b = {b}")












# For Both a And b In Different Line. 

a = int(input())
b = int(input())

print(f"Before swap: a = {a}, b = {b}")

temp = a
a = b
b = temp

print(f"After swap: a = {a}, b = {b}")




