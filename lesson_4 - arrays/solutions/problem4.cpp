#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

    bool found = false; // boolean to check whether we found the value in the matrix.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == target) {
                found = true;
            }
        }
    }

    // alternatively you can write if (found) {...}
    if (found == true) {
        cout << "will not take number";
    } else {
        cout << "will take number";
    }
}
