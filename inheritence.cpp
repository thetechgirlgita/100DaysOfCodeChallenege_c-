#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle starting..." << endl;
    }
};

class Car : public Vehicle {
public:
    void accelerate() {
        cout << "Car accelerating..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();      // Inherited from Vehicle
    myCar.accelerate();

    return 0;
}
