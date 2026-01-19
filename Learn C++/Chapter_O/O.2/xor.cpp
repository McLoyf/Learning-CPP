#include <iostream>
#include <bitset>

int main()
{
    std::cout << (std::bitset<4>{ 0b0001 } ^ std::bitset<4>{ 0b0011 } ^ std::bitset<4>{ 0b0111 }) << '\n';

    return 0;
}

/*
*  0 0 0 1 XOR
*  0 0 1 1 XOR
*  0 1 1 1
*  --------
*  0 1 0 1
*
*  If there are an even number of 1 bits in a column, the result is 0. If there are an odd number of
*  1 bits in a column, the result is 1.
*/