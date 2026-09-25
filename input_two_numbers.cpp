// -----------------------------------------
// File Name: input_two_numbers.cpp
// Description: C++ program to read two integers from the user
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ input_two_numbers.cpp -o input_two_numbers
// .\input_two_numbers.exe

// Example Input:
// 10
// 20

// Example Output:
// Enter first number: 10
// Enter second number: 20
// First number: 10
// Second number: 20
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int firstNumber;
    int secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;

    return 0;
}
