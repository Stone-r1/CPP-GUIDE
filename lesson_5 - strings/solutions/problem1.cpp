#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (word.size() <= 10) {
            cout << word << endl;
        } else {
            char firstCharacter = word[0], lastCharacter = word[word.size() - 1];
            cout << firstCharacter << word.size() - 2 << lastCharacter << endl;
        }
    }
}
