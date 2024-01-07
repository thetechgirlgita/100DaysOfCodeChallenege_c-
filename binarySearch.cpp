#include <iostream>

int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (array[middle] == target) {
            return middle; // Target found at index 'middle'
        } else if (array[middle] < target) {
            left = middle + 1; // Adjust the search range to the right half
        } else {
            right = middle - 1; // Adjust the search range to the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int sortedArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arraySize = sizeof(sortedArray) / sizeof(sortedArray[0]); // Calculate the size of the array
    int targetValue = 5;

    int resultIndex = binarySearch(sortedArray, arraySize, targetValue);

    if (resultIndex != -1) {
        std::cout << "The target value " << targetValue << " is found at index " << resultIndex << "." << std::endl;
    } else {
        std::cout << "The target value " << targetValue << " is not present in the array." << std::endl;
    }

    return 0;
}
