// COS 201 / CSC 207 - Assignment
// Program to check whether a number is odd or even

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";

    // Makes sure the user really typed a whole number
    if (!(cin >> number)) {
        cout << "Invalid input. Please enter a whole number." << endl;
        return 1;
    }

    // A number is even if it divides by 2 with no remainder
    if (number % 2 == 0) {
        cout << number << " is Even." << endl;
    } else {
        cout << number << " is Odd." << endl;
    }

    return 0;
}