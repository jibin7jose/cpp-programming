// Filename: array_sum.cpp
// Description: Calculate the sum of array elements
// Author: Jibin Jose

#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];

        sum = sum + numbers[i];
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
