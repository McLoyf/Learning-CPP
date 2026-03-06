// Internal linkage

#include <iostream>

static int g_x;     // non-constant globals have enternal linkage by default, but can be given internal linkage via static keyword

const int g_y { 1 };      // constant globals have internal linkage by default;
constexpr int g_z{ 2 };

// This function is declared as static, and can now only be used within this file
// Attempts to access it from another file via forward declaration will fail
[[maybe_unused]] static int add(int x, int y)
{
    return x + y;
}

int main()
{
    std::cout << g_x << ' ' << g_y << ' ' << g_z << '\n';

    return 0;
}