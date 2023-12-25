#include <iostream>
#include <iomanip>

int main() {
    // Get user input
    std::cout << "Enter an integer: ";
    int input;
    std::cin >> input;

    // Convert to binary without bitwise
    std::cout << "Binary: ";
    int base = 1 << 30; // Start with the leftmost bit
    bool started = false;

    while (base > 0) {
        if (input & base) {
            std::cout << '1';
            started = true;
        } else if (started) {
            std::cout << '0';
        }

        base >>= 1; // Move to the next bit
    }

    if (!started) {
        std::cout << '0'; // Special case: input is 0
    }

    std::cout << std::endl;

    // Convert to hexadecimal without bitwise
    std::cout << "Hexadecimal: 0x" << std::hex << std::uppercase << input << std::endl;

    return 0;
}
