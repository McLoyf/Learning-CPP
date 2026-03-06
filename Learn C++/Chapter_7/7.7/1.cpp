#include <iostream>

extern const int g_x { 3 }; // const globals can be defined as extern, making them external

void sayHi()
{
    std::cout << "Hi!\n";
}