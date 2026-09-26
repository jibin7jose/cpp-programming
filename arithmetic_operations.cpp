// -----------------------------------------
// File Name: arithmetic_operations.cpp
// Description: C++ program demonstrating basic arithmetic operations
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ arithmetic_operations.cpp -o arithmetic_operations
// .\arithmetic_operations.exe

// Output:
// Addition: 25
// Subtraction: 15
// Multiplication: 100
// Division: 4
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int firstNumber = 20;
    int secondNumber = 5;

    cout << "Addition: " << firstNumber + secondNumber << endl;
    cout << "Subtraction: " << firstNumber - secondNumber << endl;
    cout << "Multiplication: " << firstNumber * secondNumber << endl;
    cout << "Division: " << firstNumber / secondNumber << endl;

    return 0;
}
