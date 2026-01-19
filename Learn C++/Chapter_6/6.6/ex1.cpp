#include <iostream>

int main()
{
    constexpr bool inBigClassroom { false };
    constexpr int classSize { inBigClassroom ? 30 : 20 };
    std::cout << "The class size is: " << classSize << '\n';

    return 0;
}

/* To do the above code without the conditional operator it would look like this code below:
*
*  #include <iostream>
*
*  int getClassSize(bool inBigClassroom)
*  {
*      if (inBigClassroom)
*          return 30;
*      else
*          return 20;
*  }
*
*  int main()
*  {
*      const int classSize { getClassSize(false) };
*      std::cout << "The class size is: " << classSize << '\n';
*  
*      return 0;
*  }
*/