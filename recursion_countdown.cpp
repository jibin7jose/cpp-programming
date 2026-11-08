// -----------------------------------------
// File Name: recursion_countdown.cpp
// Description: Countdown using recursion
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ recursion_countdown.cpp -o recursion_countdown
// .\recursion_countdown.exe

// Example Output:
// 5
// 4
// 3
// 2
// 1
// -----------------------------------------

#include <iostream>

using namespace std;

void countdown(int number) {

    if (number == 0) {
        return;
    }

    cout << number << endl;

    countdown(number - 1);
}

int main() {

    countdown(5);

    return 0;
}
