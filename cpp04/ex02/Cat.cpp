#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) {
	type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	if (copy.brain) {
		this->brain = new Brain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = NULL;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy) {
	if (this == &copy)
		return *this;
	delete [] this->brain;
	if (copy.brain) {
		this->brain = new Brain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = NULL;
	this->type = copy.type;

	return (*this);
}

void Cat::makeSound() {
	std::cout << "Meow Meow Meow" << std::endl;
}
