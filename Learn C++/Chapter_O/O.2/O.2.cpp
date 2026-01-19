// Bitwise operators

#include <iostream>
#include <bitset>

int main()
{
    std::bitset<4> x { 0b1100 };

    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n';  // shift right by 1, yielding 0110
    std::cout << (x << 1) << '\n';  // shift left by 1, yielding 1000 (the 1 in the front is pushed out and lost)

    x >>= 1;
    std::cout << x << '\n'; // ">>=" can also be used to shift bits

    return 0;
}
/* The bitwise operators
*
*  left shift    Symbol: <<    Form: x << n   Op return: the bits from x are shifted left by n positions, new bits are 0
*  right shift   Symbol: >>    Form: x >> n   Op return: the bits from x are shifted right by n positions
*  bitwsie NOT   Symbol: ~     Form: ~x       Op return: each bit from x is flipped
*  bitwise AND   Symbol: &     Form: x & y    Op return: each bit is set when both corresponding bits in x and y are 1
*  bitwise OR    Symbol: |     Form: x | y    Op return: each bit is set when either corresponding bits in x and y are 1
*  bitwise XOR   Symbol: ^     Form: x ^ y    Op return: each bit is set when the corresponding bits in x and y are different
*
*  These are non-modifying operators
*/