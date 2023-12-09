#include <iostream>

int main() {
    // Declare a variable
    int originalValue = 42;

    // Declare a reference to the original variable
    int& referenceVar = originalValue;

    // Print the original value and the value through the reference
    std::cout << "Original Value: " << originalValue << std::endl;
    std::cout << "Value through Reference: " << referenceVar << std::endl;

    // Modify the value through the reference
    referenceVar = 99;

    // Print the modified value
    std::cout << "Modified Value through Reference: " << originalValue << std::endl;

    return 0;
}
