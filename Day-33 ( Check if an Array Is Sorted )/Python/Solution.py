
n = int(input("Enter array size: "))

if n < 0:
    print("Invalid array size.")
else:
    arr = list(map(int, input("Enter array elements: ").split()))

    is_sorted = True

    # Compare each element with the next element.
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            is_sorted = False
            break

    if is_sorted:
        print("Array is sorted.")
    else:
        print("Array is not sorted.")






        