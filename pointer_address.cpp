// -----------------------------------------
// File Name: pointer_address.cpp
// Description: Display the memory address of a variable
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ pointer_address.cpp -o pointer_address
// .\pointer_address.exe

// Example Output:
// Value: 100
// Memory address: 0x61ff08
// Note: The memory address will vary each time the program runs.
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int number = 100;

    cout << "Value: " << number << endl;

    cout << "Memory address: " << &number << endl;

    return 0;
}
