// -----------------------------------------
// File Name: array_count_even.cpp
// Description: Count even numbers in an array
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ array_count_even.cpp -o array_count_even
// .\array_count_even.exe

// Example Input:
// 10
// 15
// 20
// 25
// 30

// Example Output:
// Enter number 1: 10
// Enter number 2: 15
// Enter number 3: 20
// Enter number 4: 25
// Enter number 5: 30
// Count of even numbers: 3
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            count++;
        }
    }

    cout << "Count of even numbers: " << count << endl;

    return 0;
}
