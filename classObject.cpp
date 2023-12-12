#include <iostream>
#include <string>

class Car {
public:
    // Member variables
    std::string brand;
    int year;
    double price;

    // Member function to display information about the car
    void displayInfo() {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Year: " << year << "\n";
        std::cout << "Price: $" << price << "\n";
    }
};

int main() {
    // Create an object of the Car class
    Car myCar;

    // Assign values to the object's member variables
    myCar.brand = "Ford";
    myCar.year = 2022;
    myCar.price = 25000.50;

    // Call the member function to display information about the car
    myCar.displayInfo();

    return 0;
}
