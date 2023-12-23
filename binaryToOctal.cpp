#include <iostream>
#include <cmath>
//Binary Numbers to Octal Number
using namespace std;

int main() {
    long long binaryNumber;

    // Input binary number
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    // Convert binary to octal
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while (binaryNumber != 0) {
        decimalNumber += (binaryNumber % 10) * pow(2, i);
        ++i;
        binaryNumber /= 10;
    }

    i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    // Output octal number
    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}
