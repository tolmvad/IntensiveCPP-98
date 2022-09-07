#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(std::string type);
		Animal(const Animal& copy);

	public:
		virtual ~Animal();
		Animal& operator=(const Animal& copy);
		std::string getType();
		virtual void makeSound();
};

#endif
