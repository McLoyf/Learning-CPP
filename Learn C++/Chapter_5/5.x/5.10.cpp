// Chapter 5 summary and quiz

#include <iostream>
#include <string>
#include <string_view>

int getAge(std::string_view person);
void compareAges(int age1, std::string_view p1, int age2, std::string_view p2);
std::string getName(int num);

int main()
{
    const std::string p1 { getName(1) };
    const int age1 { getAge(p1) };

    const std::string p2 { getName(2) };
    const int age2 { getAge(p1) };

    compareAges(age1, p1, age2, p2);
    
    return 0;
}

int getAge(std::string_view person)
{
    std::cout << "Enter the age of " << person << ": ";
    int age;
    std::cin >> age;

    return age;
}

void compareAges(int age1, std::string_view p1, int age2, std::string_view p2)
{
    if(age1 > age2)
        std::cout << p1 << " (age " << age1 << ") is older than " << p2 << " (age " << age2 << ")\n";
    else if (age1 < age2)
        std::cout << p2 << " (age " << age2 << ") is older than " << p1 << " (age " << age1 << ")\n";
}

std::string getName(int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name;
    std::getline(std::cin >> std::ws, name);

    return name;
}