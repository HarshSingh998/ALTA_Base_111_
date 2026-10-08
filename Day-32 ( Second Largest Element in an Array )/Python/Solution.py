# Read the size of the array
n = int(input("Enter the size of the array: "))

if n < 2:
    print("At least two elements are required.")
else:
    # Read the array
    arr = list(map(int, input("Enter the elements: ").split()))

    largest = float("-inf")
    second_largest = float("-inf")

    # Find largest and second largest
    for value in arr:

        if value > largest:
            second_largest = largest
            largest = value

        elif value > second_largest and value != largest:
            second_largest = value

    # Check if a distinct second largest exists
    if second_largest == float("-inf"):
        print("Second largest element does not exist.")
    else:
        print("Second largest element:", second_largest)


