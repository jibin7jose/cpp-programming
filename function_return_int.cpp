// -----------------------------------------
// File Name: function_return_int.cpp
// Description: Add two numbers using a return value
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ function_return_int.cpp -o function_return_int
// .\function_return_int.exe

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

// Function that returns an integer
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int number1;
    int number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    int result = addNumbers(number1, number2);

    cout << "Sum: " << result << endl;

    return 0;
}
