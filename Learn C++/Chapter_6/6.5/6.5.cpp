// The comma operator

#include <iostream>

int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << (++x, ++y) << '\n';    // increment x and y, evaluates to the right operand

    // The comma operator is somewhat dangerous to use since it has a lower precedence than assignment

    int z = (x, y); // evaluate (x, y) first to get result of y, then assign that value to z
    int zz = x, y;  // evaluate as "(zz = x), y", so zz gets value of x, and b is evaluated and discarded

    return 0;
}

/* Most programmers don't use comma operator with the expection being inside for loops
*  commas are most often used as a seperator rather then as an operator
*/