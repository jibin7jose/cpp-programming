// Filename: for_sum.cpp
// Description: Calculate the sum from 1 to N
// Author: Jibin Jose

#include <iostream>

using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        sum = sum + i;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
