// -----------------------------------------
// File Name: function_overloading.cpp
// Description: Demonstrate function overloading
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ function_overloading.cpp -o function_overloading
// .\function_overloading.exe

// Example Output:
// Sum of two numbers: 30
// Sum of three numbers: 60
// -----------------------------------------

#include <iostream>

using namespace std;

// Function with two parameters
int addNumbers(int a, int b) {
    return a + b;
}

// Function with three parameters
int addNumbers(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int result1 = addNumbers(10, 20);
    int result2 = addNumbers(10, 20, 30);

    cout << "Sum of two numbers: " << result1 << endl;
    cout << "Sum of three numbers: " << result2 << endl;

    return 0;
}
