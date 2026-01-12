#include <iostream>

int printChar(char input)
{
    std::cin >> input;
    std::cout << "You entered '" << input << "', which has ASCII code " << static_cast<int>(input) << '\n';
}

int main()
{
    std::cout << "Enter a single character: ";

    int in;
    printChar(in);
    
    return 0;
}

/*  The above code works but it really shouldn't be done like this in a real program
*/