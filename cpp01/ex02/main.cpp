#include <iostream>

int	main(void) {
	std::string line = "HI THIS IS BRAIN";
	std::string *stringPTR = &line;
	std::string &stringREF = line;

	std::cout << "The memory address of the string\n";
	std::cout << &line << std::endl;

	std::cout << "The memory address stringPTR\n";
	std::cout << &(*stringPTR) << std::endl;

	std::cout << "The memory address stringREF\n";
	std::cout << &stringREF << std::endl;

	std::cout << "The value of the string\n";
	std::cout << line << std::endl;

	std::cout << "The value pointed to by stringPTR\n";
	std::cout << *stringPTR << std::endl;

	std::cout << "The value pointed to by stringREF\n";
	std::cout << stringREF << std::endl;
}
