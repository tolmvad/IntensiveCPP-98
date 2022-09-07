#include "PhoneBook.hpp"

int	main(void) {
	std::string	command;
	PhoneBook	Book;

	while (1) {
		std::cout << "Enter command -> ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			Book.Add();
		else if (command == "SEARCH")
			Book.Search();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Wrong command" << std::endl;
	}
	return 0;
}
