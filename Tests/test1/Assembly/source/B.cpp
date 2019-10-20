#include "../headers/B.hpp"
#include <iostream>

void TestProject::Assembly::B::printA(A*x)
{
    $foreach($a in $typeof(A).fields)
        std::cout<<$a.valueof(x)$$ << " " << @$a$$@;
}

void TestProject::Assembly::B::readA(A*x)
{
    $foreach($var in $typeof(A).fields)
        std::cin >> $var.valueof(x)$$;
}