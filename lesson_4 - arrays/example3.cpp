#include <iostream>
#include <algorithm>
using namespace std;

// Problem: 
// You are given an n×m grid, where n represents the number of rows and m represents the number of columns. Your goal is to sort the matrix's rows in descending order.
// Input:
// 3 3
// 3 1 2
// 5 6 4
// 9 8 7
// Output:
// 3 2 1
// 6 5 4
// 9 8 7

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // sort rows.
    for (int i = 0; i < n; i++) {
        sort(matrix[i], matrix[i] + n, greater<int>());
    }

    // output the matrix.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
