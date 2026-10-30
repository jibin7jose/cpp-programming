// -----------------------------------------
// File Name: simple_function.cpp
// Description: Create and call a simple function
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ simple_function.cpp -o simple_function
// .\simple_function.exe

// Example Output:
// Welcome to C++ Programming!
// -----------------------------------------

#include <iostream>

using namespace std;

// Function declaration and definition
void greet() {
    cout << "Welcome to C++ Programming!" << endl;
}

int main() {

    // Function call
    greet();

    return 0;
}
