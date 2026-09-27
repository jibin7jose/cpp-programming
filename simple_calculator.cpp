// -----------------------------------------
// File Name: simple_calculator.cpp
// Description: C++ program for basic calculator operations
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ simple_calculator.cpp -o simple_calculator
// .\simple_calculator.exe

// Example Input:
// 20
// 6

// Example Output:
// Enter first number: 20
// Enter second number: 6
// Addition: 26
// Subtraction: 14
// Multiplication: 120
// Division: 3
// Remainder: 2
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

    cout << "Addition: " << firstNumber + secondNumber << endl;
    cout << "Subtraction: " << firstNumber - secondNumber << endl;
    cout << "Multiplication: " << firstNumber * secondNumber << endl;
    cout << "Division: " << firstNumber / secondNumber << endl;
    cout << "Remainder: " << firstNumber % secondNumber << endl;

    return 0;
}
