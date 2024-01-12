#include <iostream>

// Function to perform Selection Sort on an array
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 5; // You can change this size as needed
    int arrayToSort[maxSize];

    // Input the array elements from the user
    std::cout << "Enter " << maxSize << " integers for the array:" << std::endl;
    for (int i = 0; i < maxSize; ++i) {
        std::cin >> arrayToSort[i];
    }

    // Perform Selection Sort
    selectionSort(arrayToSort, maxSize);

    // Display the sorted array
    std::cout << "Sorted array: ";
    printArray(arrayToSort, maxSize);

    return 0;
}
