// Increment/decrement operators, and side effects

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x { 5 };
    int value { add(x, ++x) };  // undefined behavior: is this 5 + 6, or 6 + 6?
                                // it depends on the order the compiler evaluates the function arguments in

    std::cout << value << '\n'; // could be 11 or 12

    return 0;
}


/* Incrementing and decrementing variables
*
*  Prefix increment     Symbol: ++    Form: ++x   Operation: Increment x, then return x
*  Prefix decrement     Symbol: --    Form: --x   Operation: Decrement x, then return x
*
*  Suffix increment     Symbol: ++    Form: x++   Operation: Copy x, then increment x, then return the copy
*  Suffic decrement     Symbol: --    Form: x--   Operation: Copy x, then decrement x, then return the copy
*/