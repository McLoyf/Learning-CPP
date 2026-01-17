// Operator precedence and associativity

#include <iostream>

//#define AMBIG

int getValue()
{
    std::cout << "Enter an integer: ";

    int x;
    std::cin >> x;
    return x;
}

void printCalculation(int x, int y, int z)
{
    std::cout << x + (y * z);
}

int main()
{
    #ifdef AMBIG
    printCalculation(getValue(), getValue(), getValue());   // This is ambiguous and may not produce intended results
    #endif

    int a{ getValue() };
    int b{ getValue() };
    int c{ getValue() };

    printCalculation(a, b, c);  // this line is not unambigous

    return 0;
}