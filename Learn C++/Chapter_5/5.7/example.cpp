#include <string>
#include <iostream>

#define CHARIN    // uncomment to disable

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};

    #ifndef CHARIN
    std::cin >> name;   // this will not work as expected due to the whitespace
    #endif

    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your favorite color: ";
    std::string favColor{};

    #ifndef CHARIN
    std::cin >> favColor;
    #endif

    std::getline(std::cin >> std::ws, favColor);

    std::cout << "Your name is " << name << " and your favorite color is " << favColor << '\n';

    return 0;
}