#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle starting..." << endl;
    }

    void stop() {
        cout << "Vehicle stopping..." << endl;
    }
};

class Car : public Vehicle {
public:
    void accelerate() {
        cout << "Car accelerating..." << endl;
    }

    void brake() {
        cout << "Car braking..." << endl;
    }
};

class SportsCar : public Car {
public:
    void boost() {
        cout << "Sports car boosting..." << endl;
    }
};

int main() {
    SportsCar mySportsCar;
    mySportsCar.start();      // Inherited from Vehicle
    mySportsCar.accelerate(); // Inherited from Car
    mySportsCar.boost();      // Unique to SportsCar
    mySportsCar.brake();      // Inherited from Car
    mySportsCar.stop();       // Inherited from Vehicle

    return 0;
}
