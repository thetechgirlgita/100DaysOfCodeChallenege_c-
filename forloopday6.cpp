#include <iostream>

int main() {
    int num;
    bool isPrime = true;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
