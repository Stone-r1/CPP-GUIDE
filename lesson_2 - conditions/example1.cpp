#include <iostream>
using namespace std;

int main() {
    // Simple program that checks user's age
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if (age < 0) {
        cout << "Age cannot be negative" << endl;
    } else if (age < 13) {
        cout << "You are a child" << endl;
    } else if (age < 20) {
        cout << "You are a teenager" << endl;
    } else if (age < 60) {
        cout << "You are an adult" << endl; 
    } else {
        cout << "You are a senior" << endl;
    }
}
