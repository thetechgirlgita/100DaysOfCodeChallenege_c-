#include <iostream>
#include <string>

//n inheritance, constructors play a crucial role in initializing the base class and derived class components.
//When a derived class is created, its constructor first calls the constructor of its base class.
class Car {
public:
    // Constructor
    Car(std::string b, int y) : brand(b), year(y) {
        std::cout << "Constructor called for " << brand << " " << year << std::endl;
    }

    // Public method to display car information
    void displayInfo() const {
        std::cout << "Brand: " << brand << "\nYear: " << year << std::endl;
    }

private:
    std::string brand;
    int year;
};

int main() {
    // Create an instance of the Car class, constructor is automatically called
    Car myCar("Toyota", 2022);

    // Display car information
    std::cout << "Car Information:\n";
    myCar.displayInfo();

    return 0;
}
