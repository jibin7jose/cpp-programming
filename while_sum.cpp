// -----------------------------------------
// File Name: while_sum.cpp
// Description: C++ program to calculate the sum of numbers using a while loop
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ while_sum.cpp -o while_sum
// .\while_sum.exe

// Example Input:
// 5

// Example Output:
// Enter a number: 5
// Sum: 15
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int number;
    int i = 1;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (i <= number) {
        sum = sum + i;
        i++;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
