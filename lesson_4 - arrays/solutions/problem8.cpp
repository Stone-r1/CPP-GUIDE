#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // maxLen will store the length of the longest increasing subsequence
    int maxLen = 0, count = 1; // count counts the current increase subsequence length
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            count++; // if the sequence is increasing, update the count.
        } else {
            if (count > maxLen) {
                maxLen = count; 
            }
            count = 1; // reset count of the new sequence.
        }
    }
   
    // After the loop, we may still be in an increasing sequence.
    // Consider the case:
    // 5
    // 1 7 2 11 15
    // after the loop maxLen is equal to 2 while count is 3.
    // it's because else block didn't work as the last subsequence was increasing till the end (2, 11, 15).
    if (count > maxLen) {
        cout << count;
    } else {
        cout << maxLen;
    }
}
