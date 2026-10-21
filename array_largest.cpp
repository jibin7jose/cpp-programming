// -----------------------------------------
// File Name: array_largest.cpp
// Description: Find the largest number in an array
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ array_largest.cpp -o array_largest
// .\array_largest.exe

// Example Input:
// 10
// 25
// 5
// 40
// 15

// Example Output:
// Enter number 1: 10
// Enter number 2: 25
// Enter number 3: 5
// Enter number 4: 40
// Enter number 5: 15
// Largest number: 40
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int largest;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    largest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "Largest number: " << largest << endl;

    return 0;
}
