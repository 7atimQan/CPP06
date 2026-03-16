#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base*	generate(void) {
	int random = std::rand() % 3;

	switch (random) {
		case 0 :
			std::cout << "Generated : A" << std::endl;
			return new A;

		case 1 :
			std::cout << "Generated : B" << std::endl;
			return new B;

		case 2 :
			std::cout << "Generated : C" << std::endl;
			return new C;
	}
	return NULL;
}

void identify(Base* p) {
	if (p == NULL) {
		std::cout << "Unknown type" << std::endl;
		return ;
	}
	if (dynamic_cast<A *>(p))
		std::cout << "Identified : A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Identified : B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Identified : C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "Identified : A" << std::endl;
		(void)a;
	}
	catch (std::exception& e) {}

	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "Identified : B" << std::endl;
		(void)b;
	}
	catch (std::exception& e) {}

	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "Identified : C" << std::endl;
		(void)c;
	}
	catch (std::exception& e) {}
}