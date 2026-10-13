
n = int(input("Enter array size: "))

if n < 2:
    print("At least two elements are required.")
else:
    arr = list(map(int, input("Enter array elements: ").split()))
    target = int(input("Enter target sum: "))

    seen = {}
    found = False

    for i in range(n):
        needed = target - arr[i]

        # Check whether the required number appeared earlier.
        if needed in seen:
            j = seen[needed]
            print("Indices:", j, "and", i)
            print("Values:", arr[j], "and", arr[i])
            found = True
            break

        # Store the current value and its index.
        seen[arr[i]] = i

    if not found:
        print("No pair found.")
