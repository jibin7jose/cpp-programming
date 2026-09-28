// -----------------------------------------
// File Name: comparison_operators.cpp
// Description: C++ program demonstrating comparison operators
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ comparison_operators.cpp -o comparison_operators
// .\comparison_operators.exe

// Output:
// 10 > 20: 0
// 10 < 20: 1
// 10 == 20: 0
// 10 != 20: 1
// 10 >= 20: 0
// 10 <= 20: 1
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int firstNumber = 10;
    int secondNumber = 20;

    cout << "10 > 20: " << (firstNumber > secondNumber) << endl;
    cout << "10 < 20: " << (firstNumber < secondNumber) << endl;
    cout << "10 == 20: " << (firstNumber == secondNumber) << endl;
    cout << "10 != 20: " << (firstNumber != secondNumber) << endl;
    cout << "10 >= 20: " << (firstNumber >= secondNumber) << endl;
    cout << "10 <= 20: " << (firstNumber <= secondNumber) << endl;

    return 0;
}
