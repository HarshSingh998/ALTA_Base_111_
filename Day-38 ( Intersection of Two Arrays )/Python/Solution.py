
n = int(input("Enter size of first array: "))

if n < 0:
    print("Invalid array size.")
else:
    arr1 = list(map(int, input("Enter first array elements: ").split()))

    m = int(input("Enter size of second array: "))

    if m < 0:
        print("Invalid array size.")
    else:
        arr2 = list(map(int, input("Enter second array elements: ").split()))

        # Store first-array elements for fast lookup.
        elements = set(arr1)

        # Keep unique common elements in second-array order.
        intersection = []
        seen = set()

        for value in arr2:
            if value in elements and value not in seen:
                intersection.append(value)
                seen.add(value)

        if intersection:
            print("Intersection:", *intersection)
        else:
            print("No common elements")
