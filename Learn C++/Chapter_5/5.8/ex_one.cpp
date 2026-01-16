#include <iostream>
#include <string_view>

void printSV(std::string_view str)  // now a std::string_view
{
    std::cout << str << '\n';
}

int main()
{
    std::string_view s { "Hello, world" };  // now a std::string_view
    printSV(s);

    constexpr std::string_view string{ "Hello, world! " };  // s is a string symbolic constant
    std::cout << string << '\n';                            // s will be repleced with "Hello, world!" at compile-time

    return 0;
}

/* std::string_view is read only is it makes no copies because of this difference,
*  it's much better than using std::string but the value cannot be changed and it's also very flexible
*  it can be initialized with a C-style string, std::string, std::string_view
*/