// -----------------------------------------
// File Name: array_reverse_print.cpp
// Description: Print array elements in reverse order
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ array_reverse_print.cpp -o array_reverse_print
// .\array_reverse_print.exe

// Example Input:
// 10
// 20
// 30
// 40
// 50

// Example Output:
// Enter number 1: 10
// Enter number 2: 20
// Enter number 3: 30
// Enter number 4: 40
// Enter number 5: 50
// Numbers in reverse order:
// 50
// 40
// 30
// 20
// 10
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Numbers in reverse order:" << endl;

    for (int i = 4; i >= 0; i--) {
        cout << numbers[i] << endl;
    }

    return 0;
}
