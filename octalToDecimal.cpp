#include <iostream>

int main() {
    // Input octal number as an integer
    int octalNumber;
    std::cout << "Enter an octal number: ";
    std::cin >> octalNumber;

    // Convert octal to decimal
    int decimalNumber = 0;
    int base = 1;

    while (octalNumber > 0) {
        int digit = octalNumber % 10;
        decimalNumber += digit * base;
        octalNumber /= 10;
        base *= 8;
    }

    // Display the result
    std::cout << "Decimal equivalent: " << decimalNumber << std::endl;

    return 0;
}
