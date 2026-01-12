#include <iostream>

bool isPrime(int x)
{
    if (x == 2)
        return true;
    else if (x % 2 && x != 9)
        return true;
    else
        return false;
}

int main()
{
    std::cout << "Enter a number from 0 to 9\n";

    int input;
    std::cin >> input;

    if(isPrime(input) == true)
        std::cout << "The digit is prime\n";
    else
        std::cout << "The digit is not prime\n";

    return 0;
}