// -----------------------------------------
// File Name: while_loop.cpp
// Description: C++ program demonstrating a while loop
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ while_loop.cpp -o while_loop
// .\while_loop.exe

// Output:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int number = 1;

    while (number <= 10) {
        cout << number << endl;
        number++;
    }

    return 0;
}
