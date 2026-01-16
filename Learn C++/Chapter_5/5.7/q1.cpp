#include <string>
#include <iostream>

std::string getFullName()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge()
{
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    return age;
}

int main()
{
    std::string name { getFullName() };
    int age { getAge() };
    std::cout << "Your age + length of name is: " << age + name.length() << '\n';

    return 0;
}