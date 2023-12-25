#include <iostream>

// Function to convert decimal to binary
void convertDecimalToBinary(int decimalNumber) {
    // Handle the case when the number is 0 separately
    if (decimalNumber == 0) {
        std::cout << "Binary representation: 0" << std::endl;
        return;
    }

    int binaryRepresentation[32];
    int index = 0;

    // Convert decimal to binary
    while (decimalNumber > 0) {
        binaryRepresentation[index++] = decimalNumber % 2;
        decimalNumber /= 2;
    }

    // Display the result
    std::cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; --i) {
        std::cout << binaryRepresentation[i];
    }
    std::cout << std::endl;
}

int main() {
    // Obtain the decimal number from the user
    int decimalNumber;
    std::cout << "Please enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert decimal to binary
    convertDecimalToBinary(decimalNumber);

    return 0;
}
