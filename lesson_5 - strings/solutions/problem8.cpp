#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        // if there are no 1-s answer is always 0.
        if (s.find("1") == -1) {
            cout << 0 << endl;
        } else {
            // find the first 1 and the last 1 and count 0-s between them.
            int firstOne = -1, lastOne = -1;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '1') {
                    firstOne = j;
                    break;
                }
            }
            for (int j = s.size() - 1; j >= 0; j--) {
                if (s[j] == '1') {
                    lastOne = j;
                    break;
                }
            }

            int countZeros = 0;
            for (int j = firstOne; j < lastOne; j++) {
                if (s[j] == '0') {
                    countZeros++;
                }
            }

            cout << countZeros << endl;
        }
    }
}
