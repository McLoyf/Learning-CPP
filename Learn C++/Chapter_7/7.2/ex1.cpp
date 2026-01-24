#include <iostream>

void print()    //this print() lives in the global namespace
{
    std::cout << " there\n";
}

namespace Foo
{
    void print()    // this print() lives the namespace Foo
    {
        std::cout << " Hello\n";
    }

    void printHelloThere()
    {
        print();    // calls print() in Foo namespace
        ::print();  // calls print() in global namespace
    }
}

int main()
{
    Foo::print();   // call print() in Foo namespace
    ::print();      // call print() in global namespace (same as just calling print() in this case)

    Foo::printHelloThere();
    
    return 0;
}