#include <iostream>

int main() {
    
    int number = 24;

    // Declare a pointer and initialize it with the address of the variable
    int* pointerToNumber = &number;  // Pointer holds the address of the variable

    // Print the value and address of the variable using the pointer
    std::cout << "Value of number: " << *pointerToNumber << std::endl;  
    // Differencing the pointer to get the value
    std::cout << "Address of number: " << pointerToNumber << std::endl;

    // Modify the value of the variable using the pointer
    *pointerToNumber = 99;

    // Print the updated value of the variable
    std::cout << "Updated value of number: " << number << std::endl;

    return 0;
}
