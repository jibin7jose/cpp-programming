// -----------------------------------------
// File Name: do_while_once.cpp
// Description: C++ program to demonstrate that a do-while loop executes at least once
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ do_while_once.cpp -o do_while_once
// .\do_while_once.exe

// Example Output:
// Number: 10
// Loop finished.
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int number = 10;

    do {
        cout << "Number: " << number << endl;
        number++;
    } while (number < 5);

    cout << "Loop finished." << endl;

    return 0;
}
