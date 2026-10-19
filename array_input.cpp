// Filename: array_input.cpp
// Description: Read and print array values
// Author: Jibin Jose

#include <iostream>

using namespace std;

int main() {
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "The numbers are:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}
