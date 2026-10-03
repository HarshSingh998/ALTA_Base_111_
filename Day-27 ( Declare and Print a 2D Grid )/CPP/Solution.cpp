#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    // Read the number of rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Validate the grid dimensions
    if (rows <= 0 || cols <= 0) {
        cout << "Invalid grid size." << endl;
        return 0;
    }

    // Declare a 2D grid
    vector<vector<int>> grid(rows, vector<int>(cols));

    // Input grid elements
    cout << "Enter grid elements:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    // Print the grid
    cout << "2D Grid:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}