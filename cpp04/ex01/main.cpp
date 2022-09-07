#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {

	//Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " say: ";
	i->makeSound();
	std::cout << i->getType() << " say: ";
	j->makeSound();
	//std::cout << "Animal say: ";
	//meta->makeSound();

	delete i;
	delete j;

	//WrongCat duck("Duck");

	//std::cout << duck.getType() << " say: ";
	//duck.makeSound();

	return 0;
}
