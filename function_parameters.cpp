// -----------------------------------------
// File Name: function_parameters.cpp
// Description: Add two numbers using a function
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ function_parameters.cpp -o function_parameters
// .\function_parameters.exe

// Example Input:
// 10
// 20

// Example Output:
// Enter first number: 10
// Enter second number: 20
// Sum: 30
// -----------------------------------------

#include <iostream>

using namespace std;

// Function with parameters
void addNumbers(int a, int b) {
    int sum = a + b;

    cout << "Sum: " << sum << endl;
}

int main() {
    int number1;
    int number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    // Function call with arguments
    addNumbers(number1, number2);

    return 0;
}
