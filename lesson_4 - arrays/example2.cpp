#include <iostream>
using namespace std;

// Problem: 
// You are given an n×m grid, where n represents the number of rows and m represents the number of columns. Your goal is to calculate the sum of all the elements of each row and each column of the grid and then calculate the sum of all these row and column sums. 
// Input: 
// 3 3
// 1 2 3
// 3 4 5
// 5 6 7
// Output:
// 72
// Note:
// 6 + 12 + 18 + 9 + 12 + 15 = 36 + 36 = 72

int main() {
    int n, m, totalSum = 0;
    cin >> n >> m;

    // Initialize 2D array.
    int matrix[n][m];

    // Get the input.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // calculate the sum of the rows first.
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += matrix[i][j]; // i-th row, j-th column
        }
        totalSum += rowSum;
    }

    // column sum.
    for (int j = 0; j < m; j++) {
        int columnSum = 0;
        for (int i = 0; i < n; i++) {
            columnSum += matrix[i][j];
        }
        totalSum += columnSum;
    }

    cout << totalSum << endl;
}
