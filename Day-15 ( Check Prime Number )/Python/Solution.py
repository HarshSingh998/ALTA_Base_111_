n = int(input("Enter a positive integer: "))

is_prime = True

for i in range(2, n + 1):
    if i * i > n:
        break

    if n % i == 0:
        is_prime = False
        break

if is_prime:
    print(n, "is a Prime Number")
else:
    print(n, "is not a Prime Number")