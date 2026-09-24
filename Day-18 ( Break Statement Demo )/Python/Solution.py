numbers = map(int, input("Enter integers: ").split())

sum = 0

for val in numbers:
    if val <= 0:
        break

    sum = sum + val

print("Sum before break:", sum)














