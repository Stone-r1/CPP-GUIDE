#include <iostream>
using namespace std;

int main() {
    int t = 1;
    std::cin >> t;
    
    while (t--) {
        int n, x, badEven = 0, badOdd = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (i % 2 != x % 2) {
                if (i % 2 == 1) {
                    badOdd++;
                } else {
                    badEven++;
                }
            }
        }

        if (badEven != badOdd) {
            cout << -1 << endl;
        } else {
            if (badEven < badOdd) {
                cout << badEven << endl;
            } else {
                cout << badOdd << endl;
            }
        }
    }
}
