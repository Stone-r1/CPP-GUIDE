#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Here I used -1e9, because all the numbers may be negative, so using 0 is not relevant.
    int minNum = 1e9, maxNum = -1e9;
    // We also need to save indexes for the future swap.
    int minNumIndex = 0, maxNumIndex = 0;
    for (int i = 0; i < n; i++) {
        // Check for minimum and maximum in one for loop.
        if (array[i] < minNum) {
            minNum = array[i];
            minNumIndex = i;
        }
        if (array[i] > maxNum) {
            maxNum = array[i];
            maxNumIndex = i;
        }
    }

    swap(array[minNumIndex], array[maxNumIndex]);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}
