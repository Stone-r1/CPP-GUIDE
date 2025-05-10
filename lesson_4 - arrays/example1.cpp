#include <iostream>
using namespace std;

// Problem:
// Given n integers, save them in an array and calculate their sum.
// Input:
// 5
// 1 2 3 4 5
// Output:
// 15

int main() {
    int n;
    cin >> n;

    // get input directly into the array.
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i]; // store the i-th input into the array
    }

    // calculate the sum.
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i]; // add the i-th element of the array to the sum
    }

    cout << sum << endl;
}
