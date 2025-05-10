#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        bool found = false;

        // Check next y days: is there a smaller or equal rainfall?
        for (int j = i + 1; j < n && j <= i + y; j++) {
            if (arr[i] >= arr[j]) {
                found = true;
                break;
            }
        }
        // Check previous x days: is there a smaller or equal rainfall?
        for (int j = i - 1; j >= 0 && j >= i - x; j--) {
            if (arr[i] >= arr[j]) {
                found = true;
                break;
            }
        }

        // If no such day was found, that means we found our day.
        if (found == false) {
            cout << i + 1 << endl; // +1 for 1-based indexing.
            break;
        }
    }
}
