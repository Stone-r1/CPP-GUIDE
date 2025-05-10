#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int total = 0;
        char a;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                std::cin >> a;

                if (a == 'X') {
                    if (i == 0 || i == 9 || j == 0 || j == 9) {
                        total++;
                    } else if (i == 1 || i == 8 || j == 1 || j == 8) {
                        total += 2;
                    } else if (i == 2 || i == 7 || j == 2 || j == 7) {
                        total += 3;
                    } else if (i == 3 || i == 6 || j == 3 || j == 6) {
                        total += 4;
                    } else {
                        total += 5;
                    }
                }
            }
        }
        cout << total << '\n';
    }
}
