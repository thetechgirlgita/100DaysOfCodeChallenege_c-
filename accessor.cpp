#include <iostream>

class MyClass {
public:
    // Public members can be accessed from outside the class
    int publicVar;

    // Public member function
    void publicFunction() {
        std::cout << "Public function called." << std::endl;
    }

private:
    // Private members can only be accessed within the class
    int privateVar;

    // Private member function
    void privateFunction() {
        std::cout << "Private function called." << std::endl;
    }

protected:
    // Protected members can be accessed within the class and its derived classes
    int protectedVar;

    // Protected member function
    void protectedFunction() {
        std::cout << "Protected function called." << std::endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // Access public members
    obj.publicVar = 42;
    obj.publicFunction();
    
    // Private members cannot be accessed outside the class
    // obj.privateVar;  // This will result in a compilation error
    // obj.privateFunction();  // This will result in a compilation error

    // Protected members also cannot be accessed outside the class
    // obj.protectedVar;  // This will result in a compilation error
    // obj.protectedFunction();  // This will result in a compilation error

    return 0;
}
