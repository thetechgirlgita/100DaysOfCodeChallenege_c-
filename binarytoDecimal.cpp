#include <iostream>
#include <cmath>

using namespace std;
// Converting Process

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

    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Converting to Decimal: " << decimalNumber << endl;

    return 0;
}
