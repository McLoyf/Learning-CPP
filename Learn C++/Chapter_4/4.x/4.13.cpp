// Chapter 4 summary and quiz

#include <iostream>

double doMath(double x, double y, char z)
{
    if(static_cast<int>(z) == 42)
        return x * y;
    else if(static_cast<int>(z) == 43)
        return x + y;
    else if(static_cast<int>(z) == 45)
        return x -y;
    else if(static_cast<int>(z) == 47)
        return x / y;
}

int main()
{
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;

    std::cout << "Enter a double value: ";
    double y;
    std::cin >> y;

    std::cout << "Enter +, -, *, /: ";
    char input;
    std::cin >> input;

    std::cout << x << " " << input << " " << y << " is " << doMath(x, y, input) << '\n';

    return 0;
}