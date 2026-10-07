# Read the size of the array
n = int(input("Enter the size of the array: "))

# Handle invalid size
if n <= 0:
    print("Invalid array size.")
else:
    # Read the array
    arr = list(map(int, input("Enter the elements: ").split()))

    # Assume the first element is the largest
    largest = arr[0]

    # Check the remaining elements
    for i in range(1, n):
        if arr[i] > largest:
            largest = arr[i]

    # Display the largest element
    print("Largest element:", largest)