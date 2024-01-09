#include <iostream>

bool isLeapYear(int year) {
    // Leap year is divisible by 4
    // But if it is divisible by 100, it must also be divisible by 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;

    // Input the year from the user
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check if the entered year is a leap year
    if (isLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
