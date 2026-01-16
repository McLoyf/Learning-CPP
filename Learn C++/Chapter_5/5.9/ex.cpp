#include <iostream>
#include <string_view>

int main()
{
    std::string_view str { "Peach" };
    std::cout << str << '\n';

    str.remove_prefix(1);       // Remove 1 character from the left side of the view
    std::cout << str << '\n';

    str.remove_suffix(2);       // Remove 2 characters from the right side of the view
    std::cout << str << '\n';

    str = "Peach";              // Reset the view
    std::cout << str << '\n';

    return 0;
}