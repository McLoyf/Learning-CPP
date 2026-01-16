// std::string_view (part 2)

#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string_view sv{};

    {   // create a nested block
        std::string s { "Hello, world!" };  // create std::string local to this block
        sv = s; // sv is now viewing s
    }   // s is destroyed here, so sv is now viewing an invalid string

    std::cout << sv << '\n';    // undefined bechavior

    return 0;
}