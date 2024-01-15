#include <iostream>

int main() {
    // Dynamic memory allocation
    int* dynamicArray = new int[5]; // Allocating an array of 5 integers

    // Initializing the array
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 10;
    }

    // Displaying the content of the dynamic array
    std::cout << "Dynamic Array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Dynamic memory deallocation
    delete[] dynamicArray; // Deallocating the array

    return 0;
}
