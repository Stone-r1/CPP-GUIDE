#include <iostream>
using namespace std;

int main() {
    int t = 1;
    std::cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        c %= (a + b);
        if (c < a) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
