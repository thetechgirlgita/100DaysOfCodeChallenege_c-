#include <iostream>

int main() {
    char charVariable;
    std::cout << "Size of char: " << sizeof(charVariable) << " bytes" << std::endl;

    int intVariable;
    std::cout << "Size of int: " << sizeof(intVariable) << " bytes" << std::endl;

    float floatVariable;
    std::cout << "Size of float: " << sizeof(floatVariable) << " bytes" << std::endl;

    double doubleVariable;
    std::cout << "Size of double: " << sizeof(doubleVariable) << " bytes" << std::endl;

    return 0;
}
