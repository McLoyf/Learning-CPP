// Arithmetic operators

#include <iostream>

int main()
{
    constexpr int x{ 7 };
    constexpr int y{ 4 };

    std::cout << "int / int = " << x / y << '\n';
    std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
    std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';

    return 0;
}

/* Arithmetic assignment operators
*  Addition assignment        Symbol: +=    Form: x += y    Operation: Add y to x
*
*  Subtraction assignment     Symbol: -=    Form: x -= y    Operation: Subtract y from x
*
*  Multiplication assignment  Symbol: *=    Form: x *= y    Operation: Multiply x by y
*
*  Division assignment        Symbol: /=    Form: x /= y    Operation: Divide x by y
*
*  Remainder assignment       Symbol: %=    Form: x %= y    Operation: Put the remainder of x / y in x
*/