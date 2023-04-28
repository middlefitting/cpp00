#ifndef CONTACT_PARSER_HPP
# define CONTACT_PARSER_HPP
#include <iostream>

class ContactParser {
	public:
	ContactParser();
	std::string valueCheck(std::string msg);
	std::string resizeValue(std::string value);
	std::string ft_getline();
};
#endif
