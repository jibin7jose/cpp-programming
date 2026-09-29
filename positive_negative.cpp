// -----------------------------------------
// File Name: positive_negative.cpp
// Description: C++ program to check whether a number is positive or negative
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ positive_negative.cpp -o positive_negative
// .\positive_negative.exe

// Example Input:
// 10

// Example Output:
// Enter a number: 10
// The number is positive.
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
