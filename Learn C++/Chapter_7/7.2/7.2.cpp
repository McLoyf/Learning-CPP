// 7.2 User-defined namespaces and the cope resolution operator
#include <iostream>

namespace Foo   // define a namepace named Foo
{
    int doSomething(int x, int y)
    {
        return x + y;
    }
}

namespace Goo
{
    int doSomething(int x, int y)
    {
        return x - y;
    }

    namespace Doll
    {
        int add(int x, int y)
        {
            return x + y;
        }
    }
}

int main()
{

    namespace Active = Goo::Doll;   // Active now refers to Goo:Doll

    std::cout << Active::add(1, 2);

    std::cout << Foo::doSomething(4, 3) << '\n';    // use the doSomething in namespace Foo

    return 0;
}