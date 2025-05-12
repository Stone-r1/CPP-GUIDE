#include <iostream>
#include <string>
using namespace std;

// Problem:
// You're given a string k, followed by n strings. The task is to calculate how many of those n strings are contiguous substrings of the initial string.
// Input:
// oneBigString
// 5
// one Big Str, xy, gg.
// Output:
// 3
// Note: one, Big and Str are substrings of the first string.

int main() {
    string k;
    cin >> k;

    int n, count = 0; // count is used to count amount of substrings.
    cin >> n;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;

        int front = 0; // this will track how many characters of temp match in a row with k.
        for (int j = 0; j < k.size(); j++) {
            if (front < temp.size() && k[j] == temp[front]) {
                front++; // characters match, move to the next character in the temp.
            } else if (front > 0) {
                break; // if a mismatch occurs, no point in checking further.
            }
        }

        // if front equals the size of temp, the whole temp string matched in a row so it's a substring.
        if (front == temp.size()) {
            count++;
        }
    }

    cout << count << endl;

    // Try solving this task another way, using .find() function.
}
