
//---------------------------Output-----------------------------------------
/*
Enter a digit: 5
Multiplication table for 5:
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/

#include <iostream>

int main() {
    // Get the digit for which you want to print the multiplication table
    int digit;
    std::cout << "Enter a digit: ";
    std::cin >> digit;

    // Print the multiplication table for the given digit
    std::cout << "Multiplication table for " << digit << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << digit << " * " << i << " = " << (digit * i) << std::endl;
    }

    return 0;
}

