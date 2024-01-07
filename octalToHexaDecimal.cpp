#include <iostream>

int main() {
    // Input octal number
    long long octalNumber;
    std::cout << "Enter an octal number: ";
    std::cin >> octalNumber;

    // Convert octal to decimal
    long long decimalNumber = 0;
    long long octalBase = 1;
    while (octalNumber != 0) {
        int digit = octalNumber % 10;
        decimalNumber += digit * octalBase;
        octalNumber /= 10;
        octalBase *= 8;
    }

    // Convert decimal to hexadecimal
    char hexadecimalNumber[50];
    int i = 0;
    while (decimalNumber != 0) {
        int remainder = decimalNumber % 16;
        char hexDigit = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        hexadecimalNumber[i++] = hexDigit;
        decimalNumber /= 16;
    }
    
    // Display the result
    std::cout << "Hexadecimal equivalent: ";
    for (--i; i >= 0; --i) {
        std::cout << hexadecimalNumber[i];
    }
    std::cout << std::endl;

    return 0;
}
