#include <iostream>

int octalToBinary(int octalNumber) {
    int binaryNumber = 0;
    int base = 1;  // To keep track of the position value

    while (octalNumber > 0) {
        int digit = octalNumber % 10;  // Extract the last digit

        // Convert the octal digit to binary and update the result
        while (digit > 0) {
            binaryNumber += (digit % 2) * base;
            digit /= 2;
            base *= 10;
        }

        // Move to the next octal digit
        octalNumber /= 10;
    }

    return binaryNumber;
}

int main() {
    // Input an octal number
    int octalNumber;
    std::cout << "Enter an octal number: ";
    std::cin >> octalNumber;

    // Convert octal to binary
    int binaryNumber = octalToBinary(octalNumber);

    // Display the binary representation
    std::cout << "Binary representation: " << binaryNumber << std::endl;

    return 0;
}
