// -----------------------------------------
// File Name: even_odd.cpp
// Description: C++ program to check whether a number is even or odd
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ even_odd.cpp -o even_odd
// .\even_odd.exe

// Example Input:
// 7

// Example Output:
// Enter a number: 7
// The number is odd.
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
