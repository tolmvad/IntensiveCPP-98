#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "NaN";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	this->type = copy.type;

	return (*this);
}

std::string WrongAnimal::getType() {
	return (this->type);
}

void WrongAnimal::makeSound() {
	std::cout << "Random sound" << std::endl;
}
