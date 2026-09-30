// -----------------------------------------
// File Name: number_range.cpp
// Description: C++ program to check whether a number is positive, negative, or zero
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ number_range.cpp -o number_range
// .\number_range.exe

// Example Input:
// -5

// Example Output:
// Enter a number: -5
// The number is negative.
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    else if (number < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
