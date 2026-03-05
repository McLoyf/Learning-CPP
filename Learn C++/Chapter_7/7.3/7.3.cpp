// Local Variables

#include <iostream>

int main()
{
    int x { 5 };        // x enters scope and is created here

    {  // nested block
        
        int y { 7 };                                                // y is here but cannot be called outside the nested block

        std::cout << x << " + " << y << " = " << x + y << '\n';     // just as if this were a function scope, x can be seen
    
    } // y goes out of scope and is destroyed

    return 0;

} // x goes out of scope and is destroyed