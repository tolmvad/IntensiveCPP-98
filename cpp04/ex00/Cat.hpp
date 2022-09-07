#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);

		virtual void makeSound();
};

#endif
