// -----------------------------------------
// File Name: grade_calculator.cpp
// Description: C++ program to calculate grade based on marks
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ grade_calculator.cpp -o grade_calculator
// .\grade_calculator.exe

// Example Input:
// 85

// Example Output:
// Enter your marks: 85
// Grade: B
// -----------------------------------------

#include <iostream>

using namespace std;

int main() {

    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
