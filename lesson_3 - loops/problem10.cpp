#include <iostream>
using namespace std;

int main() {
    int n, k, b, a = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> b;
        if (b + k <= 5) {
            a++;
        }
    } 
    cout << a / 3 << endl;
}
