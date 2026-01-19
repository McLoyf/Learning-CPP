#include <iostream>
#include <bitset>

int main()
{
    // Giving out bits names help make our code more readable
    [[maybe_unused]] constexpr int isHungry   { 0 };
    [[maybe_unused]] constexpr int isSad      { 1 };
    [[maybe_unused]] constexpr int isMad      { 2 };
    [[maybe_unused]] constexpr int isHappy    { 3 };
    [[maybe_unused]] constexpr int isLaughing { 4 };
    [[maybe_unused]] constexpr int isAsleep   { 5 };
    [[maybe_unused]] constexpr int isDead     { 6 };
    [[maybe_unused]] constexpr int isCrying   { 7 };

    std::bitset<8> me { 0b0000'0101 };
    me.set(isHappy);      // set position 3 to 1 (now we have 0000 1101)
    me.flip(isLaughing);  // flip bit 4 (now have 0001 1101)
    me.reset(isLaughing); // set bit 4 back to 0 (now we have 0000 1101)

    std::cout << "All the bits: " << me << '\n';
    std::cout << "I am happy: " << me.test(isHappy) << '\n';
    std::cout << "I am laughing: " << me.test(isLaughing) << '\n';

    return 0;
}

/* std::bitset is bulit for speed and not memory saving so it may use more bytes than needed. The the above example
*  it may use either 4 or 8 bytes of memory even though it techinically only needs 1 byte. std::bitset is most useful
*  when we want covenience, not memory savings
*/