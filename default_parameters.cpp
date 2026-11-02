// -----------------------------------------
// File Name: default_parameters.cpp
// Description: Demonstrate default function parameters
// Author: Jibin Jose
// -----------------------------------------

// Running Command:
// g++ default_parameters.cpp -o default_parameters
// .\default_parameters.exe

// Example Input:
// 100
// 0

// Example Output:
// Enter price: 100
// Enter quantity (0 for default quantity): 0
// Total price: 100
// -----------------------------------------

#include <iostream>

using namespace std;

int calculateTotal(int price, int quantity = 1) {
    return price * quantity;
}

int main() {
    int price;
    int quantity;

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity (0 for default quantity): ";
    cin >> quantity;

    int total;

    if (quantity == 0) {
        total = calculateTotal(price);
    } else {
        total = calculateTotal(price, quantity);
    }

    cout << "Total price: " << total << endl;

    return 0;
}
