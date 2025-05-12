#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        int countOnes = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '1') {
                countOnes++;
            }
        }

        cout << countOnes << endl;
    }
}
