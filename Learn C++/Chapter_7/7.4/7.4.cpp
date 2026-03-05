// Introduction to global variables

#include <iostream>

int g_x;        // variables declared out here are global and can be called from anywhere

void doSomething()
{
    g_x = 3;
    std::cout << g_x << '\n';
}

int main()
{
    doSomething();
    std::cout << g_x << '\n';

    g_x = 5;
    std::cout << g_x << '\n';

    return 0;
}
// g_x goes out of scope here

/* Global variables are zero-initialized by default so even though the way I initialized it would normally result in
   the value of g_x to be essentially random, because it's in the global scope it instead holds the value 0
*/