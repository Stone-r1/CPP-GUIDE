#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int even = 0, evenIndex = -1, oddIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
            evenIndex = i + 1;
        } else {
            oddIndex = i + 1;
        }
    }

    if (even == 1) {
        cout << evenIndex << endl;
    } else {
        cout << oddIndex << endl;
    }
}
