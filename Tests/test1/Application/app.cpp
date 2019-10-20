#include "../Assembly/headers/B.hpp"
#include <iostream>
int main()
{
    TestProject::Assembly::B b;
    TestProject::Assembly::A a;
    a.b=5;
    a.n=3;
    b.printA(&a);
    std::cout.flush();
    return  0;
}