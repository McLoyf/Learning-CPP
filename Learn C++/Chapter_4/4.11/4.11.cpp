// Chars

#include <iostream>

int main()
{
    char ch { 97 };      // initialize with integer 97 (ASCII code 97 is 'a')
    char ch1 { 'a' };   // initalize with code point for 'a' (ASCII code 97)

    std::cout << ch << '\n';
    std::cout << ch1 << '\n';

    return 0;
}