// -----------------------------------------
// File Name: compare_numbers.cpp
// Description: C++ program to compare two numbers
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ compare_numbers.cpp -o compare_numbers
// .\compare_numbers.exe

// Example Input:
// 10
// 20

// Example Output:
// Enter first number: 10
// Enter second number: 20
// Are the numbers equal? 0
// Are the numbers different? 1
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

    cout << "Are the numbers equal? "
         << (firstNumber == secondNumber) << endl;

    cout << "Are the numbers different? "
         << (firstNumber != secondNumber) << endl;

    return 0;
}
