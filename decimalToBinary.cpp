#include <iostream>

// Function to convert decimal to binary


void decimalToBinary(int decimalNumber) {
    
    if (decimalNumber == 0) {
        std::cout << "Binary representation: 0" << std::endl;
        return;
    }// Handle the case when the number is 0 separately

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
    // Get the decimal number from the user
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert decimal to binary
    decimalToBinary(decimalNumber);

    return 0;
}
