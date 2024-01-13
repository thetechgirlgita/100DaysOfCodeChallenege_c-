#include <iostream>

// Function to calculate simple interest
float calcSimpleInterest(float p, float r, int t) {
    return (p * r * t) / 100.0;
}

int main() {
    float principal, interestRate;
    int duration;

    // Input principal amount
    std::cout << "Enter principal amount: ";
    std::cin >> principal;

    // Input interest rate
    std::cout << "Enter interest rate (per annum): ";
    std::cin >> interestRate;

    // Input time in years
    std::cout << "Enter time (in years): ";
    std::cin >> duration;

    // Calculate simple interest
    float simpleInterest = calcSimpleInterest(principal, interestRate, duration);

    // Display the calculated simple interest
    std::cout << "Simple Interest: " << simpleInterest << std::endl;

    return 0;
}
