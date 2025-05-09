#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;
    
        int m = 1;
        while (w % 2 == 0) {
            m *= 2;
            w /= 2;
        }

        while (h % 2 == 0) {
            m *= 2;
            h /= 2;
        }

        if (m >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
