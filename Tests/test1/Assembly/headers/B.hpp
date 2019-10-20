#include "A.hpp"

namespace TestProject
{
	namespace Assembly
	{
        class B
        {
            A v;
        public :
            void printA(A*x);
            void readA(A*x);
        };
    }
}
