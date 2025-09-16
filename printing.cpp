#include <iostream>
#include <vector>
using namespace std;
//This code is developed Alityass

int main() {
    int m, n;

    // Input matrix size
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    // Check for valid dimensions
    if (m <= 0 || n <= 0) {
        cout << "Rows and columns must be positive integers." << endl;
        return 1;
    }

    // Declare 2D vector
    vector<vector<int> > matrix(m, vector<int>(n) );

    // Input matrix elements
    cout << "Enter the elements of the matrix (" << m * n << " elements):" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Print matrix
    cout << "\nThe matrix is:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << "\t";  // tab for spacing
        }
        cout << endl;
    }

    return 0;
}


