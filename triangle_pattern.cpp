// Filename: triangle_pattern.cpp
// Description: Print a right-angled triangle
// Author: Jibin Jose

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
