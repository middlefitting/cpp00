#include "main.hpp"

int main() {
	Phonebook phonebook = Phonebook();
	ContactParser contact_parser = ContactParser();

	std::cout << "Weclome Phonebook!" << std::endl;
	std::cout << "[ADD, SEARCH, EXIT] command to start!" << std::endl;

	while (true)
	{
		std::cout << "INPUT COMMAND: ";
		std::string cmd = contact_parser.ft_getline();

		if (cmd == "ADD")
		{
			phonebook.append();
		}
		else if (cmd == "SEARCH")
		{
			phonebook.info();
			std::cout << "INPUT INDEX: ";
			phonebook.contactInfo(atoi(contact_parser.ft_getline().c_str()));
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "COMMAND NOT FOUND: [ADD, SEARCH, EXIT]" << std::endl;
	}
	return 0;
}
