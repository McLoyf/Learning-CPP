#include <bitset>
#include <iostream>

int main()
{
	std::cout << (std::bitset<4>{ 0b0001 } & std::bitset<4>{ 0b0011 } & std::bitset<4>{ 0b0111 }) << '\n';

	return 0;
}

/* How bitwise AND works
*
*  0 0 0 1 AND
*  0 0 1 1 AND
*  0 1 1 1
*  --------
*  0 0 0 1
*/