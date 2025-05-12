#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string w;
        cin >> w;

        // remove the last two characters
        w.pop_back();
        w.pop_back();

        // append 'i'.
        w += 'i';
        cout << w << endl;
    }

    // Try writing it with erase().
    // Also try solving this without any inbuilt string function except for .size().
}
