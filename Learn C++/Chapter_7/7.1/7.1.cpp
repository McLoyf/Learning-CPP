// Compound statements (blocks)

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int value;
    std::cin >> value;

    if (value >= 0)
    {
        std::cout << value << " is a positive integer (or zero)\n";
        std::cout << "Double this number is " << value * 2 << '\n';
    }
    else
    {
        std::cout << value << " is a negative integer\n";
        std::cout << "The absolute value of this number is " << -value << '\n';
    }

    return 0;
}