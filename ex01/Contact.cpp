#include "Contact.hpp"

Contact::Contact() {
	this->contactParser = ContactParser();
};

void Contact::setting() {
	this->first_name = contactParser.valueCheck("First name: ");
	this->last_name = contactParser.valueCheck("Last name: ");
	this->nickname = contactParser.valueCheck("Nickname: ");
	this->phone_number = contactParser.valueCheck("Phone number: ");
	this->darkest_secret = contactParser.valueCheck("Darkest secret: ");
}


std::string Contact::getFirstName() {
	return this->contactParser.resizeValue(this->first_name);
}

std::string Contact::getLastName() {
	return this->contactParser.resizeValue(this->last_name);
}

std::string Contact::getNickname() {
	return this->contactParser.resizeValue(this->nickname);
}

void Contact::info() {
	std::cout << "- First name: " <<  this->first_name << std::endl;
	std::cout << "- Last name: " <<  this->last_name << std::endl;
	std::cout << "- Nickname: " <<  this->nickname << std::endl;
	std::cout << "- Phone number: " <<  this->phone_number << std::endl;
	std::cout << "- Darkest secret: " <<  this->darkest_secret << std::endl;
}


