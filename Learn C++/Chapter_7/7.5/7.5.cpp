// Variable shadowing (name hiding)

#include <iostream>

int main()
{
    int apples { 5 };                   // outer block apple

    {
        std::cout << apples << '\n';    // print value of the outer block apple

        int apples { 0 };               // define apples in scope of the nested block

        apples = 10;                    // apple now refers to blcok scope apple, so this doesn't assign '10' to the outer scope

        std::cout << apples << '\n';    // print value of nested blcok apples
    }

    std::cout << apples << '\n';        // prints value of outer block apples

    return 0;
}

// This variable shadowing also works with global variables