// -----------------------------------------
// File Name: do_while_loop.cpp
// Description: C++ program to print numbers from 1 to 5 using a do-while loop
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ do_while_loop.cpp -o do_while_loop
// .\do_while_loop.exe

// Example Output:
// 1
// 2
// 3
// 4
// 5
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int number = 1;

    do {
        cout << number << endl;
        number++;
    } while (number <= 5);

    return 0;
}
