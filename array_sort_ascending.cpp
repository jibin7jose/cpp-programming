// -----------------------------------------
// File Name: array_sort_ascending.cpp
// Description: Sort an array in ascending order
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ array_sort_ascending.cpp -o array_sort_ascending
// .\array_sort_ascending.exe

// Example Input:
// 50
// 20
// 40
// 10
// 30

// Example Output:
// Enter number 1: 50
// Enter number 2: 20
// Enter number 3: 40
// Enter number 4: 10
// Enter number 5: 30
// Ascending order:
// 10 20 30 40 50
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Ascending order:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
