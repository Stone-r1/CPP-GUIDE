#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array, array + n, greater<int>());
    long long sum = 0; // there can be up to 10^3 integers that are up to 10^9, which exceeds int.
    for (int i = 0; i < k; i++) {
        if (array[i] < 0) {
            break; // we don't want to add elements that are negative, because they decrease our sum.
        }
        sum += array[i];
    }

    cout << sum;
}
