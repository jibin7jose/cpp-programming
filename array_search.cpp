// -----------------------------------------
// File Name: array_search.cpp
// Description: Search for a number in an array
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ array_search.cpp -o array_search
// .\array_search.exe

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
// Number found!
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int search;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (numbers[i] == search) {
            found = true;
            break;
        }
    }

    if (found == true) {
        cout << "Number found!" << endl;
    } else {
        cout << "Number not found!" << endl;
    }

    return 0;
}
