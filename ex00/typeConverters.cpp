#include "ScalarConverter.hpp"

void	handlePseudo(double d) {
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;

	std::cout << "float : " << std::fixed << std::setprecision(1) << d << 'f' << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	baseChar(double d) {
	char	c;
	int		i;
	float	f;

	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	std::cout << "char : " << c << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	convertChar(double d) {
	if (d >= CHAR_MIN && d <= CHAR_MAX) {
		char c = static_cast<char>(d);
		if (!isprint(c))
			std::cout << "char : Non displayable" << std::endl;
		else
			std::cout << "char : " << c << std::endl;
	}
	else
		std::cout << "char : impossible" << std::endl;
}

void	baseInt(double d) {
	int		i;
	float	f;

	convertChar(d);
	i = static_cast<int>(d);
	f = static_cast<int>(d);

	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	convertInt(double d) {
	if (d <= INT_MAX && d >= INT_MIN) {
		int i = static_cast<int>(d);
		std::cout << "int : " << i << std::endl;
	}
	else
		std::cout << "int : impossible" << std::endl;
}

void	baseFloat(double d) {
	convertChar(d);
	convertInt(d);
	float f = static_cast<float>(d);
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << 'f' << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

// pour faire une projecion dans une collection (select) : db.mycollection.find(arg1[,arg2])
// arg1 est un objet JSON qui permet de faire une restrction (where)
