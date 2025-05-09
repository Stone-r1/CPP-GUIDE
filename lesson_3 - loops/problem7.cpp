#include <iostream>
using namespace std;

int main() {
    int t = 1;
    std::cin >> t;
    
    while (t--) {
        int n, x, sum = 0, frequency = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
            if (x == 1) {
                frequency++;
            }
        }

        if (sum % 2 == 1) {
            cout << "NO" << endl;
        } else if ((sum / 2) % 2 == 1 && frequency == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
