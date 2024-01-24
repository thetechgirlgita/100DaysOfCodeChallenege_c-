#include <iostream>

void reverseStringArray(std::string arr[], int size) {
    for (int start = 0, end = size - 1; start < end; ++start, --end) {
        // Swap elements at positions start and end
        std::swap(arr[start], arr[end]);
    }
}

int main() {
    // Illustrative string array
    std::string myArray[] = {"Hello", "World", "C++", "Programming"};

    // Determine the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Reverse the string array
    reverseStringArray(myArray, size);

    // Display the reversed array
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
  

    return 0;
}
