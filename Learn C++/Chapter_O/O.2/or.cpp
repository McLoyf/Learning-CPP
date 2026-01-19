#include <bitset>
#include <iostream>

int main()
{
    std::cout << (std::bitset<4>{ 0b0111 } | std::bitset<4>{ 0b0011 } | std::bitset<4>{ 0b0001 } << '\n');

    return 0;
}

/* How bitwise OR works in the above code
*
*  0 1 1 1 OR
*  0 0 1 1 OR
*  0 0 0 1
*  --------
*  0 1 1 1
*
*  As long was one of the bits is 1, it will produce 1
*/