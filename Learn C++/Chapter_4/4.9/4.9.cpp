// Boolean values

#include <iostream>

bool b {};  // default initialize to false
bool b1 { !true };  // initialized with the value false

int main()
{
    std::cout << b << '\n';
    std::cout << !b << '\n';

    std::cout << std::boolalpha;    // prints bools as true or false (std::noboolalpha is used to turn it back off)

    std::cout << b << '\n';
    std::cout << !b << '\n';

    return 0;
}