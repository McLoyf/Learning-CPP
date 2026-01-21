#include <bitset>

// If we need a function that has 32 options we could do this in on of two ways

void someFunction(bool option1, bool option2, bool option3, bool option4, bool option5, bool option6, bool option7,
    bool option8, bool option9, bool option10, bool option11, bool option12, bool option13, bool option14, bool option15,
    bool option16, bool option17, bool option18, bool option19, bool option20, bool option21, bool option22, bool option23,
    bool option24, bool option25, bool option26, bool option27, bool option28, bool option29, bool option30, bool option31,
    bool option32);

// or more reasonably

void someFunction2(std::bitset<32> options);

