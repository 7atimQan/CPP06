#include "ScalarConverter.hpp"

bool isPseudoLiteral(std::string arg) {
	return (arg == "nan" || arg == "nanf" || arg == "+inf"
		|| arg == "+inff" || arg == "-inf" || arg == "-inff");
}

static bool	checkFloatingPoint(std::string arg) {
	int hasPoint = 0;

	for (size_t i = 0; arg[i] != '\0'; i++) {
		if (arg[i] == '.')
			hasPoint++;
	}
	return (hasPoint == 1);
}

bool isFloat(std::string arg) {
	if (arg[arg.length() - 1] != 'f')
		return false;

	if (!checkFloatingPoint(arg))
		return false;

	for (size_t i = 0; i < arg.length() - 1; i++) {
		if (i == 0 && (arg[i] == '-' || arg[i] == '+'))
			continue ;
		if (i != 0 && arg[i] == '.' && arg[i + 1] != 'f')
			continue ;
		if (!isdigit(arg[i]))
			return false;
	}
	double d = strtod(arg.c_str(), NULL);
	if (d < MIN_FLOAT || d > MAX_FLOAT)
		return false;

	return true;
}

bool	isDouble(std::string arg) {
	if (!checkFloatingPoint(arg))
		return false;

	for (size_t i = 0; i < arg.length(); i++) {
		if (i == 0 && (arg[i] == '-' || arg[i] == '+'))
			continue ;
		if (i != 0 && arg[i] == '.' && arg[i + 1] != '\0')
			continue ;
		if (!isdigit(arg[i]))
			return false;
	}
	return true;
}

bool	isChar(std::string arg) {
	if (arg.length() != 1)
		return false;

	if (!isprint(arg[0]))
		return false;

	if (isdigit(arg[0]))
		return false;
	return true;
}

bool	isInt(std::string arg) {
	for (size_t i = 0; i < arg.length(); i++) {
		if (i == 0 && (arg[i] == '-' || arg[i] == '+'))
			continue ;
		if (!isdigit(arg[i]))
			return false;
	}
	long l = strtol(arg.c_str(), NULL, 10);
	if (l > INT_MAX || l < INT_MIN)
		return false;

	return true;
}

