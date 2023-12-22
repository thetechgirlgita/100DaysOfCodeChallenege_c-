#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0;
    int base = 1;

    while (binaryNumber > 0) {
        int lastDigit = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += lastDigit * base;
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    // Input binary number
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    // Call the binaryToDecimal function and display the result
    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}
