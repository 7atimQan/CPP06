#include "ScalarConverter.hpp"

TYPE getType(std::string arg) {
	if (isChar(arg))
		return CHAR;
	else if (isInt(arg))
		return INT;
	else if (isFloat(arg))
		return FLOAT;
	else if (isDouble(arg))
		return DOUBLE;
	else if (isPseudoLiteral(arg))
		return PSEUDO;
	else
		throw 0; //
}

void ScalarConverter::convert(std::string arg)
{
	TYPE	type;
	double	d = strtod(arg.c_str(), NULL);
	
	try {
		type = getType(arg);
	}
	catch (int) {
		std::cerr << "UNKNOWN TYPE !" << std::endl;
		return ;
	}
	switch (type) {
		case PSEUDO :
			handlePseudo(d);
			break ;

		case CHAR :
			handleChar(arg[0]);
			break ;

		case INT :
			break ;

		case FLOAT :
			break ;

		default :
			break ;
	}	
} 