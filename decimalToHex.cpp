#include <iostream>

int main() {
    // Input decimal number
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert decimal to hexadecimal
    std::cout << "Hexadecimal equivalent: " << std::hex << decimalNumber << std::endl;

    return 0;
}
