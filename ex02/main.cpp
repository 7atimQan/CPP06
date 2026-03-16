#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main(void)
{
		srand(time(NULL));
        Base *ptr = generate();

        std::cout << "Pointer: ";
        identify(ptr);

        std::cout << "Reference: ";
        identify(*ptr);

        std::cout << std::endl;

        delete ptr;
}