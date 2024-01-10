#include <iostream>
#include <string>

// Function to reverse a string
std::string reverseString(const std::string& originalStr) {
    // Use iterators to reverse the string
    return std::string(originalStr.rbegin(), originalStr.rend());
}

int main() {
    std::string userInput;

    // Input the string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    // Reverse the string
    std::string reversedResult = reverseString(userInput);

    // Output the reversed string
    std::cout << "Reversed string: " << reversedResult << std::endl;

    return 0;
}
