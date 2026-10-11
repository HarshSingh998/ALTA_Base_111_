
n = int(input("Enter array size: "))

if n < 0:
    print("Invalid array size.")
else:
    arr = list(map(int, input("Enter array elements: ").split()))
    
    d = int(input("Enter rotation count: "))

    if n > 0:
        d = d % n

        # Reverse the first d elements.
        arr[:d] = arr[:d][::-1]

        # Reverse the remaining elements.
        arr[d:] = arr[d:][::-1]

        # Reverse the entire array.
        arr.reverse()

    print("Rotated array:", *arr)
