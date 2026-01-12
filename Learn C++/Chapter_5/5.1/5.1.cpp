// Constant variables (named constants)

#include <iostream>

const double gravity { 9.8 };   // Cannot be changed (ofc)
int const sidesInSquare { 4 };  // Also works but not preferred (this style of const declaration called "east const")

void printGravity(double grav)
{
    std::cout << "gravity: " << grav << '\n';
}

int main()
{
    printGravity(3.71);

    return 0;
}