#include "easyfind.hpp"

int		main()
{
	std::vector<int> myVector;
	std::vector<int>::iterator it;

	for (int i = 0; i < 20; i += 2)
		myVector.push_back(i);

	try {
		std::cout << "find 16: ";
		it = easyfind(myVector, 16);
		std::cout << *it << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "find 3: ";
		it = easyfind(myVector, 3);
		std::cout << *it << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
