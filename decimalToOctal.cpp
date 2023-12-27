#include <iostream>
using namespace std;

int main() {
    // Input: Decimal number
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    // Variables for octal conversion
    int octalNumber = 0, i = 1;

    // Convert decimal to octal
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    // Output: Octal equivalent
    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}
