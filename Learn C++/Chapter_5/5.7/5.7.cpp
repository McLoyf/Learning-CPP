// Introduction to std::string

#include <string>
#include <iostream>

int main()
{
    std::string name { "Alex" };
    std::cout << "My name is: " << name << '\n';    // Intialize string with value of 'Alex'

    name = "John";                                  // Reassign string with value of John
    std::cout << "My name is: " << name << '\n';

    return 0;
}