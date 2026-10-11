
n = int(input("Enter array size: "))

if n < 0:
    print("Invalid array size.")
else:
    arr = list(map(int, input("Enter array elements: ").split()))

    # Reverse the array by swapping elements.
    left = 0
    right = n - 1

    while left < right:
        temp = arr[left]
        arr[left] = arr[right]
        arr[right] = temp

        left += 1
        right -= 1

    print("Reversed array:", *arr)
