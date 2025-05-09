#include <iostream>
using namespace std;

// Problem:
// Given a positive integer n, calculate and print the sum of all its digits.
// Input: 123
// Output: 6
// Note: 1 + 2 + 3 = 6.

int main() {
    int n;
    cin >> n; // Read the number

    int sum = 0; // <- // Initialize sum to 0 (always initialize before use)
    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        sum += digit; // Add it to the sum
        n /= 10; // Remove the last digit
    }

    cout << sum << endl;
}
