#include <iostream>

namespace constants
{
    constexpr double gravity { 9.8 };
}

int main()
{
    std::cout << constants::gravity << '\n';

    return 0;
}

/*  Another way to use global variables is putting it in a namespace to avoid naming collision, we could also make a file named
    'constants.cpp' and make forward declarations in files we want the constants to be used in. 

    Example:
    constants.cpp:
        namespace constants
        {
            constexpr double gravity { 9.8 };
        }
        
        double getGravity()
        {
            return constants::gravity;
        }

    main.cpp
        #include <iostream>

        double getGravity();

        int main()
        {
            std::cout << getGravity() << '\n';

            return 0;
        }
    
    OUTPUT: '9.8'
*/