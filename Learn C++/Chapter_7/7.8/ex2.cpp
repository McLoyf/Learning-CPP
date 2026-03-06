#include <iostream>

namespace constants
{
    constexpr double gravity { 9.8 };
}

double instantVelocity(int time, double gravity)    // can calculate the instant velocity for any gravity value
{
    return gravity * time;
}

int main()
{
    std::cout << instantVelocity(5, constants::gravity) << '\n';

    return 0;
}

/* Less useful version
#include <iostream>

namespace constants
{
    constexpr double gravity { 9.8 };
}

// This function is only useful for calculating your instant velocity based on the global gravity
double instantVelocity(int time)
{
    return constants::gravity * time;
}

int main()
{
    std::cout << instantVelocity(5) << '\n';

    return 0;

}
*/

/* BONUS:
    A C++ joke
    
    What's the best naming prefix for a global variable?

    Answer: //
*/