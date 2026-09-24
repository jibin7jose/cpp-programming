// -----------------------------------------
// File Name: input_integer.cpp
// Description: C++ program to read an integer from the user
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ input_integer.cpp -o input_integer
// .\input_integer.exe

// Example Input:
// 22

// Example Output:
// Enter your age: 22
// Your age is: 22
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age is: " << age << endl;

    return 0;
}
