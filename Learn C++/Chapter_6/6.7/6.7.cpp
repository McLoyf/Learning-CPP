// Relational operators and floating point comparisons

#include <iostream>

int main()
{
    constexpr double d1 { 100.0 - 99.99 };  // should equal 0.01
    constexpr double d2 { 10.0 - 9.99 };    // should equal 0.01

    if (d1 == d2)
        std::cout << "d1 == d2" << '\n';
    else if ( d1 > d2 )
        std::cout << "d1 > d2" << '\n';
    else if ( d1 < d2 )
        std::cout << "d1 < d2" << '\n';

    return 0;
}

/* d1 > d2 is printed
*  
*  d1 = 0.010000000000005116
*  d2 = 0.0099999999999997868
*/