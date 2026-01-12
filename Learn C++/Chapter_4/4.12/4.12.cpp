// Introduction to type conversion and static_cast

#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int main()
{
    print( static_cast<int>(5.5) );   // explicitly convert doubel value to 5.5 at an int

    char ch{ 97 };
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n';

    return 0;
}

/* int s2 { 5 }
*  std::cout << static_cast<unsigned int>(s2) << '\n';
*/