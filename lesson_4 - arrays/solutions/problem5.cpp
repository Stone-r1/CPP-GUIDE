#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int mainArray[n];
    for (int i = 0; i < n; i++) {
        cin >> mainArray[i];
    }

    int subArray[m];
    for (int i = 0; i < m; i++) {
        cin >> subArray[i];
    }

    // use this pointer that will point to the last element of subarray
    int front = 0;
    for (int i = 0; i < n; i++) { 
        if (front < m && mainArray[i] == subArray[front]) {
            front++;
        }
    }

    if (front == m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
