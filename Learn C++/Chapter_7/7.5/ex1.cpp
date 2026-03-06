#include <iostream>

int value { 5 };

int main()
{
    int value { 7 };
    ++value;

    --(::value);    // '::' means we're talking about the global variable value rather than the one defined in main()

    std::cout << "local variable value: " << value << '\n';
    std::cout << "global variable value: " << ::value << '\n';

    return 0;
}