// -----------------------------------------
// File Name: recursion_factorial.cpp
// Description: Calculate factorial using recursion
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ recursion_factorial.cpp -o recursion_factorial
// .\recursion_factorial.exe

// Example Input:
// 5

// Example Output:
// Enter a number: 5
// Factorial: 120
// -----------------------------------------

#include <iostream>

using namespace std;

int factorial(int number) {

    if (number == 0 || number == 1) {
        return 1;
    }

    return number * factorial(number - 1);
}

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    int result = factorial(number);

    cout << "Factorial: " << result << endl;

    return 0;
}
