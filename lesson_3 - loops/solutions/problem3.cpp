#include <iostream>
using namespace std;

int main() {
    int t = 1;
    std::cin >> t;
    
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        if (n * p < abs(k)) { // abs stands for absolute (|-5| = 5). 
            cout << -1 << endl;
        } else {
            int minOperations = abs(abs(k) + p - 1) / p; // ceiling division
            cout << minOperations << endl;
        }
    }
}
