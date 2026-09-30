// -----------------------------------------
// File Name: or_operator.cpp
// Description: C++ program demonstrating the logical OR operator
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ or_operator.cpp -o or_operator
// .\or_operator.exe

// Example Input:
// 20

// Example Output:
// Enter a number: 20
// The number is 10 or 20.
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 10 || number == 20) {
        cout << "The number is 10 or 20." << endl;
    }
    else {
        cout << "The number is neither 10 nor 20." << endl;
    }

    return 0;
}
