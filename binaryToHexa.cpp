#include <iostream>

int main() {
    // Get user input
    std::cout << "Enter an integer: ";
    int input;
    std::cin >> input;

    // Convert to binary
    std::cout << "Binary: ";
    for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
        std::cout << ((input >> i) & 1);
    }
    std::cout << std::endl;

    // Convert to hexadecimal
    std::cout << "Hexadecimal: 0x";
    if (input == 0) {
        std::cout << '0';  // Special case: input is 0
    } else {
        char hexDigits[] = "0123456789ABCDEF";
        bool leadingZeros = true;

        for (int i = sizeof(int) * 2 - 1; i >= 0; --i) {
            int nibble = (input >> (i * 4)) & 0xF;
            if (nibble != 0 || !leadingZeros) {
                std::cout << hexDigits[nibble];
                leadingZeros = false;
            }
        }
    }

    std::cout << std::endl;

    return 0;
}
