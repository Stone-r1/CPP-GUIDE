#include <iostream>
using namespace std;

int main() {
    // Program that checks age and ID status
    int age;
    bool hasID; // <- boolean because user either has id or no (only true or false)
    
    cout << "Enter Your Age: ";
    cin >> age;
    
    cout << "Do You Have an ID? (1 for Yes, 0 for No): ";
    cin >> hasID;

    if (age < 0 || age > 120) {
        cout << "Invalid age entered!" << endl;
    } else if (age >= 18 && hasID) {
        cout << "You are an adult with ID" << endl;
    } else if (age >= 18 && !hasID) {
        cout << "ID is required!" << endl;
    } else if (age < 18 && hasID) {
        cout << "You are underage!" << endl;
    } else {
        cout << "Underage and no ID!" << endl;
    }
}

