// Introduction to std::string_view

#include <iostream>
#include <string>

void printString(std::string str)
{
    std::cout << str << '\n';   // str makes a copy of its initializer
}

int main()
{
    std::string s{ "Hello, world!" };   // s makes a copy of its initializer
    printString(s);

    return 0;
}

/* The above code is needlessly slow as it has std::string copies all over just to print one string
*/