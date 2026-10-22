// -----------------------------------------
// File Name: array_smallest.cpp
// Description: Find the smallest number in an array
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ array_smallest.cpp -o array_smallest
// .\array_smallest.exe

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
// Smallest number: 5
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int smallest;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    smallest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;

    return 0;
}
