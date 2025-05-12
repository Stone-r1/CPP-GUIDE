#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size();) {
        // if "WUB" is found, skip it.
        if (s.substr(i, 3) == "WUB") {
            i += 3;
        } else {
            // print characters until "WUB" is found.
            while (i < s.size() && s.substr(i, 3) != "WUB") {
                cout << s[i];
                i++;
            }
            cout << " "; // add space between words.
        }
    }

    // Try solving this problem using inbuilt functions .find() and .erase().
}
