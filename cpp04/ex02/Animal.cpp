#include "Animal.hpp"

Animal::Animal() {
	this->type = "NaN";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy) {
	this->type = copy.type;

	return (*this);
}

std::string Animal::getType() {
	return (this->type);
}

void Animal::makeSound() {
	std::cout << "ARRRRRRR !!!!" << std::endl;
}
