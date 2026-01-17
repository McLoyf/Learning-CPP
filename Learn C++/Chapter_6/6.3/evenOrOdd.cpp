#include <iostream>
#include <string_view>

constexpr std::string_view isEven(int x)
{
    if(x % 2 != 0)
        return "odd";
    else
        return "even";
}

int getInput()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    return x;
}

void printEvenOrOdd(int x)
{
    std::cout << x << " is " << isEven(x) << '\n';   
}

int main()
{
    int input { getInput() };

    printEvenOrOdd( input );

    return 0;
}