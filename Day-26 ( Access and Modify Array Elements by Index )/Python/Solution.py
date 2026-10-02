# Read the size of the array
n = int(input("Enter the size of the array: "))

# Create an empty list
arr = []

# Read array elements
print("Enter", n, "elements:")

for i in range(n):
    value = int(input())
    arr.append(value)

# Ask for the index to modify
index = int(input("Enter the index you want to modify: "))

# Check whether the index is valid
if index < 0 or index >= n:
    print("Invalid index!")
else:
    # Access and print the current value
    print("Current value:", arr[index])

    # Take the new value
    new_value = int(input("Enter the new value: "))

    # Modify the array element
    arr[index] = new_value

    # Print the modified array
    print("Modified array:", end=" ")

    for i in range(n):
        print(arr[i], end=" ")