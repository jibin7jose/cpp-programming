// -----------------------------------------
// File Name: switch_calculator.cpp
// Description: C++ program demonstrating a calculator using switch statement
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ switch_calculator.cpp -o switch_calculator
// .\switch_calculator.exe

// Example Input:
// 10
// *
// 5

// Example Output:
// Enter first number: 10
// Enter operation (+, -, *, /): *
// Enter second number: 5
// Result: 50
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    double firstNumber;
    double secondNumber;
    char operation;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> secondNumber;

    switch (operation) {

        case '+':
            cout << "Result: " << firstNumber + secondNumber << endl;
            break;

        case '-':
            cout << "Result: " << firstNumber - secondNumber << endl;
            break;

        case '*':
            cout << "Result: " << firstNumber * secondNumber << endl;
            break;

        case '/':
            if (secondNumber != 0) {
                cout << "Result: " << firstNumber / secondNumber << endl;
            }
            else {
                cout << "Cannot divide by zero." << endl;
            }
            break;

        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}
