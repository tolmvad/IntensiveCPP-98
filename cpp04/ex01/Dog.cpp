#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) {
	type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	if (copy.brain) {
		this->brain = new Brain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = NULL;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
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

void Dog::makeSound() {
	std::cout << "Gaf Gaf Gaf" << std::endl;
}
