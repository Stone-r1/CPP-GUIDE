#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int x = 0, y = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    // find 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    // calculate the distance.
    int distance = abs(x - 2) + abs(y - 2); 
    cout << distance << endl;
}
