// calculator.h

#ifndef CALCULATOR_H
#define CALCULATOR_H

// Function declarations
int calculateQuotient(int dividend, int divisor);
int calculateRemainder(int dividend, int divisor);

#endif 

//--------------------------------------------------------

// main.cpp

#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{    
    int divisor, dividend;

    cout << "Enter dividend here: ";
    cin >> dividend;

    cout << "Enter divisor here: ";
    cin >> divisor;

    int quotient = calculateQuotient(dividend, divisor);
    int remainder = calculateRemainder(dividend, divisor);

    cout << "Quotient is  = " << quotient << endl;
    cout << "Remainder is  = " << remainder;

    return 0;
}
