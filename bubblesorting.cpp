#include <iostream>

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    // Perform Bubble Sort
    bubbleSort(arrayToSort, maxSize);

    // Display the sorted array
    std::cout << "Sorted array: ";
    printArray(arrayToSort, maxSize);

    return 0;
}
