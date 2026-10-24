// -----------------------------------------
// File Name: array_search_position.cpp
// Description: Find the position of a number in an array
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ array_search_position.cpp -o array_search_position
// .\array_search_position.exe

// Example Input:
// 10
// 20
// 30
// 40
// 50
// 30

// Example Output:
// Enter number 1: 10
// Enter number 2: 20
// Enter number 3: 30
// Enter number 4: 40
// Enter number 5: 50
// Enter number to search: 30
// Number found at position: 3
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int search;
    int position = -1;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (numbers[i] == search) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "Number found at position: "
             << position + 1 << endl;
    } else {
        cout << "Number not found!" << endl;
    }

    return 0;
}
