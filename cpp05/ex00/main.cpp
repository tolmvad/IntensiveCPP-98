#include "Bureaucrat.hpp"

int main(void) {

	Bureaucrat donatello("Donatello", 55);
	std::cout << donatello << std::endl;
	donatello.decrementGrade();
	std::cout << donatello << std::endl;
	donatello.incrementGrade();
	std::cout << donatello << std::endl;

	std::cout << "=== Low test ===\n";
	try {
		Bureaucrat jonny("Jonny", 0);
		std::cout << jonny << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << "=== High test ===\n";
	try {
		Bureaucrat marcy("Marcy", 200);
		std::cout << marcy << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << "=== Decrement test ===\n";
	try {
		Bureaucrat pola("Pola", 1);
		std::cout << pola << std::endl;
		pola.decrementGrade();
		std::cout << pola << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << "=== Increment test ===\n";
	try {
		Bureaucrat sam("Sam", 150);
		std::cout << sam << std::endl;
		sam.incrementGrade();
		std::cout << sam << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what();
	}

	return 0;
}
