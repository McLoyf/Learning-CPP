#include <iostream>

int abs(int x)
{
    if (x < 0)
        return -x;  // early return (only when x < 0)
    
    return x;
}

int main()
{
    std::cout << abs(4) << '\n';
    std::cout << abs(-3) << '\n';

    return 0;
}