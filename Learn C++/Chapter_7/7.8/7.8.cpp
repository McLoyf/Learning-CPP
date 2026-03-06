// Why (non-const) global variables are evil
#include <iostream>

int g_mode;

void doSomething()
{
    g_mode = 2;
}

int main()
{
    g_mode = 1;     // changes global variable to 1

    doSomething();  // changes the same variable to 2

    if (g_mode == 1)
    {
        std::cout << "No threat detected.\n";   // As long as doSomething() is called, this will never run. If this were a local
                                                // variable all would be fine
    }
    else
    {
        std::cout << "Launching nuclear missiles...\n";
    }

    return 0;
}


/*  In the above example the problem is obvious but if this file were a long file, the issue would be a lot harder to track down
    The use of globals should meet two criteria: There should only ever be one of the thing and it's use should be ubiquitous,
    a log file is a good example.
*/