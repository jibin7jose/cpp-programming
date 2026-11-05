// -----------------------------------------
// File Name: multiple_parameters.cpp
// Description: Calculate total and average using multiple parameters
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ multiple_parameters.cpp -o multiple_parameters
// .\multiple_parameters.exe

// Example Input:
// 80
// 75
// 90

// Example Output:
// Enter first subject mark: 80
// Enter second subject mark: 75
// Enter third subject mark: 90
// Total marks: 245
// Average marks: 81.6667
// -----------------------------------------

#include <iostream>

using namespace std;

int calculateTotal(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}

double calculateAverage(int mark1, int mark2, int mark3) {
    int total = calculateTotal(mark1, mark2, mark3);
    return total / 3.0;
}

int main() {
    int mark1;
    int mark2;
    int mark3;

    cout << "Enter first subject mark: ";
    cin >> mark1;

    cout << "Enter second subject mark: ";
    cin >> mark2;

    cout << "Enter third subject mark: ";
    cin >> mark3;

    int total = calculateTotal(mark1, mark2, mark3);
    double average = calculateAverage(mark1, mark2, mark3);

    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;

    return 0;
}
