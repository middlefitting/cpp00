#include "ContactParser.hpp"

ContactParser::ContactParser() {};

std::string ContactParser::valueCheck(std::string msg) {
	std::string result;

	while (true)
	{
		std::cout << msg;
		std::getline(std::cin, result);
		if (std::cin.eof())
			std::exit(0);
		if (result.length() != 0)
			break;
		std::cout << "INVALID VALUE: EMPTY!" << std::endl;
	}
	return result;
}

std::string ContactParser::resizeValue(std::string value) {
	if (value.length() >= 10) {
		value.resize(9);
		value.resize(10, '.');
	}
	return value;
}


std::string ContactParser::ft_getline() {
	std::string result;
	std::getline(std::cin, result);
	if (std::cin.eof())
		std::exit(0);
	return result;
}
