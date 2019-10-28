#include "Program.hpp"
#include <iostream>

void doStuff()
{
    $foreach($ns in $namespaceof(X).namespaces)
        std::cout<<@$ns$$@;
}