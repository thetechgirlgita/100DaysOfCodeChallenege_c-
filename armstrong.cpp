#include <iostream>
#include <cmath>

using namespace std;

// Function to determine if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num;
    int digitCount = 0;
    int sum = 0;

    // Count the number of digits in num
    while (originalNum != 0) {
        originalNum /= 10;
        ++digitCount;
    }

    originalNum = num; // Reset originalNum to its original value

    // Calculate the sum of the nth power of each digit
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digitCount);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == num);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
