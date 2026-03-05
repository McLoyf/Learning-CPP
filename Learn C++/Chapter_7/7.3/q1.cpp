#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int smaller;
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger;
    std::cin >> larger;

    if (smaller > larger)
    {
        int temp;
        std::cout << "Swapping the values" << '\n';

        temp = larger;
        larger = smaller;
        smaller = temp;

        // this is the same thing as the code above
        // std::swap(larger, smaller);
    }

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
}