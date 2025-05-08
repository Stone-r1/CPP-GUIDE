#include <iostream> // <- library for handling input/output
using namespace std; // <- let's just skip it for now

// main function (Let's just skip it for now)
int main() {
    // Simple program that converts Celsius to Fahrenheit
    double celsius, fahrenheit; // <- declare variables
    cout << "Enter temperature in Celsius: "; // <- cout outputs text between double quotes in the command line
    cin >> celsius; // <- cin gets information from the console

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0; // <- here we are using 9.0 and 5.0 because we're working with double type
    cout << "Temperature in Fahrenheit is: " << fahrenheit << endl; // <- endl means end line i.e. endline character (enter)
}
