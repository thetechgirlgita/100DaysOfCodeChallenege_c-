#include <iostream>
using namespace std;

int main() {

    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    // Output: Octal equivalent
    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}
