# Read the number of rows and columns
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

# Validate the grid dimensions
if rows <= 0 or cols <= 0:
    print("Invalid grid size.")
else:
    # Declare a 2D grid
    grid = []

    # Input grid elements
    print("Enter grid elements:")

    for i in range(rows):
        row = list(map(int, input().split()))

        while len(row) != cols:
            print(f"Please enter exactly {cols} numbers:")
            row = list(map(int, input().split()))

        grid.append(row)

    # Print the grid
    print("2D Grid:")

    for i in range(rows):
        for j in range(cols):
            print(grid[i][j], end=" ")
        print()