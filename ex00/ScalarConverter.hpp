#pragma once

# include <iostream>
# include <stdlib.h>
# include <climits>

class ScalarConverter {
	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& s);
		ScalarConverter& operator=(const ScalarConverter& s);
		~ScalarConverter();

	public :
		static void convert(std::string arg);
};

bool	isPseudoLiteral(std::string arg);
bool	isFloat(std::string arg);
bool	isDouble(std::string arg);
bool	isChar(std::string arg);
bool	isInt(std::string arg);

void handlePseudo(double d);
void handleChar(double d);

typedef enum e_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO
} TYPE;