#include <iostream>
#include "complex.h"

int main ()
{
    const complex<int> obj(2,4);
    std::cout<<obj.real();

    return 0;
}