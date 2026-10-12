
n = int(input("Enter array size: "))

if n < 0:
    print("Invalid array size.")
else:
    arr = list(map(int, input("Enter binary array elements (0 or 1): ").split()))

    current_ones = 0
    max_ones = 0

    # Count consecutive ones.
    for value in arr:
        if value == 1:
            current_ones += 1
            if current_ones > max_ones:
                max_ones = current_ones
        else:
            current_ones = 0

    print("Maximum consecutive ones:", max_ones)





    