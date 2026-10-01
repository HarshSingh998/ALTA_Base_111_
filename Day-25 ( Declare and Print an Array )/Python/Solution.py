# Ask for the size of the array
n = int(input("Enter the size of the array: "))

# Create an empty array
arr = []

# Input array elements
print("Enter", n, "elements:")

for i in range(n):
    value = int(input())
    arr.append(value)

# Print array elements
print("Array elements:", end=" ")

for i in range(n):
    print(arr[i], end=" ")