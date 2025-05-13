#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 0;
    } else {
        long long a = 0, b = 1;
        for (int i = 2; i < n; i++) {
            long long temp = a + b;
            a = b;
            b = temp;
        }

        cout << b;
    }
} 
