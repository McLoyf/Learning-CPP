// External linkage and variable forward declarations
#include "1.cpp";   // I know that it's not recommanded to do this

extern const int g_x;   // forward declaration of extern const from '1.cpp'

void sayHi();

int main()
{
    sayHi();

    std::cout << g_x << '\n';

    return 0;
}