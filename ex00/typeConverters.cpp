#include "ScalarConverter.hpp"

void handlePseudo(double d) {
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;

	std::cout << "float : " << d << 'f' << std::endl;
	std::cout << "double : " << d << std::endl;
}

void handleChar(double d) {
	char	c;
	int		i;
	float	f;

	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	std::cout << "char : " << c << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << f << std::endl;
	std::cout << "double : " << d << std::endl;
}