#include <iostream>
#include <string>

int main()
{
    std::string name { "Alex" };
    std::cout << name << " has " << name.length() << " characters\n";

    using namespace std::string_literals;   // easy access to the s suffix

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal

    return 0;
}

/* Making copies of std::string is expensive, so we should minimize the number of copies made*/