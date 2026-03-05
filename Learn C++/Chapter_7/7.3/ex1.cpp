#include <iostream>

int main()
{
    int y { 5 };        // needs to be in the outer scope

    {
        int x;
        std::cin >> x;

        // if y was declared here

        if (x == 4)
            y = 4;
    }  // ... it would be destroyed here

    std::cout << y;  // y needs to exist here or it'll fail to compile

    return 0;
}

/* By limiting scope we reduce complexity of the program because the number of active variables is reduced.
*/