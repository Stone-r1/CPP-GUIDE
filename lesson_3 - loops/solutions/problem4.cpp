#include <iostream>
using namespace std;

int main() { 
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        int minValue = 1e9, maxValue = 0; // 1e9 means 10^9

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x < minValue) minValue = x; 
            if (x > maxValue) maxValue = x;
        }

        cout << maxValue - minValue << '\n';
    }
}

