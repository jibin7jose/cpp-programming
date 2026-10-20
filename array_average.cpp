// -----------------------------------------
// File Name: array_average.cpp
// Description: Calculate the average of array elements
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ array_average.cpp -o array_average
// .\array_average.exe

// Example Input:
// 10
// 20
// 30
// 40
// 50

// Example Output:
// Enter number 1: 10
// Enter number 2: 20
// Enter number 3: 30
// Enter number 4: 40
// Enter number 5: 50
// Sum: 150
// Average: 30
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int sum = 0;
    double average;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];

        sum = sum + numbers[i];
    }

    average = static_cast<double>(sum) / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
