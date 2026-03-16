#include "ScalarConverter.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}
	if (argv[1][0] == '\0') {
		std::cerr << "Error: Empty argument." << std::endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);
	return 0;
}