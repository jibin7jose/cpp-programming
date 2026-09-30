// -----------------------------------------
// File Name: and_operator.cpp
// Description: C++ program demonstrating the logical AND operator
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ and_operator.cpp -o and_operator
// .\and_operator.exe

// Example Input:
// 25

// Example Output:
// Enter your age: 25
// You are eligible.
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 60) {
        cout << "You are eligible." << endl;
    }
    else {
        cout << "You are not eligible." << endl;
    }

    return 0;
}
